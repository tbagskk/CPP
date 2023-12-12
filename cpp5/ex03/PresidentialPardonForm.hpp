

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
        
        std::string getTarget( void ) const;
        void    beExecuted( Bureaucrat const &executor ) const;
        static Form    *makeForm( Form *form, std::string const &type, std::string const &target );
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &form);
