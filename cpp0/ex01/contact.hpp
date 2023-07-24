#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

class Contact
{
    private:
        std::string _name;
        std::string _surname;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;

    public:
        Contact(void);
        ~Contact(void);

        void    set_name(std::string str);
        void    set__surname(std::string str);
        void    set__nickname(std::string str);
        void    set__phone_number(std::string str);
        void    set_secret(std::string str);

        std::string    get_name(void);
        std::string    get__surname(void);
        std::string    get__nickname(void);
        std::string    get__phone_number(void);
        std::string    get_secret(void);

};


#endif