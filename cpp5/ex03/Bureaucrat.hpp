
#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const _name;
		int			_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &copy );
		Bureaucrat	&operator=( Bureaucrat const &rhs );
		~Bureaucrat( void );

		std::string const getName( void ) const;
		int	getGrade( void ) const;

		void increaseGrade( void );
		void decreaseGrade( void );
		void setGrade( int const grade );
		void signForm( Form &form );
		void executeForm( Form const &form);
		

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat *a);
