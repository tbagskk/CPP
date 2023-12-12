

#pragma once

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern( void );	
		Intern( Intern const &copy );
		Intern	&operator=( Intern const & rhs );
		~Intern( void );

		Form	*makeForm( std::string const &type, std::string const &target );
};
