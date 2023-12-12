

#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        PresidentialPardonForm( void );
        std::string _target;
    public:
        PresidentialPardonForm( std::string target );
        PresidentialPardonForm( PresidentialPardonForm const &copy );
        PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );
        ~PresidentialPardonForm( void );
        void    beExecuted( Bureaucrat const &executor ) const;

        std::string getTarget( void ) const;
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &form);
