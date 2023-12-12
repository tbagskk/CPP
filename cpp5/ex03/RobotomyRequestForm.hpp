

#pragma once

#include "Form.hpp"
#include <stdlib.h>

class RobotomyRequestForm: public Form
{
    private:
        RobotomyRequestForm( void );
        std::string _target;
    public:
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( RobotomyRequestForm const &copy );
        RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs );
        ~RobotomyRequestForm( void );
        
        std::string getTarget( void ) const;
        void    beExecuted( Bureaucrat const &executor ) const;
        static Form    *makeForm( Form *form, std::string const &type, std::string const &target );
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &form);
