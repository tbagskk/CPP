#include "phonebook.hpp"

int main(void)
{
    Phonebook phone;
    std::string entries;

    while (entries != "EXIT")
    {
        std::cout << "Entres une commande mon reuf\n";
        std::getline(std::cin, entries);

        if (entries == "ADD")
            phone.add();
        else if (entries == "SEARCH")
            phone.search();
    }
    return (0);
}