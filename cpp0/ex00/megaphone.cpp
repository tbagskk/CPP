#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if (ac < 2)
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (ac > 1)
    {
        while (av && av[i])
        {
            j = 0;
            while (av[i] && av[i][j])
            {
                std::cout << (char)std::toupper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
    return (0);
    
}
