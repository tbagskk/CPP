#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <stdio.h>

class Contact
{
    private:
        std::string name;
        std::string surname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void    set_name(std::string str);
        void    set_surname(std::string str);
        void    set_nickname(std::string str);
        void    set_phone_number(std::string str);
        void    set_secret(std::string str);

        std::string    get_name(void);
        std::string    get_surname(void);
        std::string    get_nickname(void);
        std::string    get_phone_number(void);
        std::string    get_secret(void);

};

class Phonebook
{
private:
    Contact contact[8];
    int index;
public:
    void    add(void);
    void    print(Contact contact);
    int     verif(std::string str);
    void    search(void);
 
};





#endif