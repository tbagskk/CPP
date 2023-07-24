#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

#include "contact.hpp"



class Phonebook
{
private:
    Contact contact[8];
    int index;
    int var;
public:
    Phonebook(void);
    ~Phonebook(void);

    void    add(void);
    void    print(Contact contact);
    int     verif(std::string str);
    void    search(void);
    std::string return_all(std::string str);
};


#endif