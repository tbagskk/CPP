#include "phonebook.hpp"

int main(void)
{
    Phonebook phone;
    std::string entries;

    while (entries != "EXIT")
    {
        std::cout << "Enter an order : ADD or SEARCH or EXIT\n";
        std::getline(std::cin, entries);

        if (entries == "ADD")
            phone.add();
        else if (entries == "SEARCH")
            phone.search();
        if (std::cin.eof())
        {
            std::cout << "Program shutdown." << std::endl;
            return 0;
        }
           
    }
    return (0);
}