
#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
    private:
        ShrubberyCreationForm( void );
        std::string _target;
    public:
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const &copy );
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );
        ~ShrubberyCreationForm( void );
        void    beExecuted( Bureaucrat const &executor ) const;
        std::string getTarget( void ) const;
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm &form);
