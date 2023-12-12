

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
        void    beExecuted( Bureaucrat const &executor ) const;
        std::string getTarget( void ) const;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &form);
