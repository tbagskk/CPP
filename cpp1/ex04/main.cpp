#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    std::ifstream file;
    std::string str;
    std::ofstream outfile;
    int index;
    char c;

    if (ac != 4)
    {
        std::cout << "error: usage: <file> old_word new_word" << std::endl;
        return (1);
    }
    file.open(av[1]);
    if (file.fail())
    {
        std::cout << "error: no such file or directory" << std::endl;
        return (1);
    }
    while(!file.eof() && file >> std::noskipws >> c)
        str += c;
    file.close();

    outfile.open((std::string(av[1]) + ".replace").c_str()); //c.str permet de recuperer l'interieur d'un string
    if (outfile.fail())
        return (1);
    for(int i = 0; i < (int)str.size(); i++)
    {
        index = str.find(av[2], i);
        if (index != -1 && index == i)
        {
            outfile << av[3];
            i += std::string(av[2]).size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
    return (0);
}