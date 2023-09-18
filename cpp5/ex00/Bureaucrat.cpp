#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    this->_grade = 1;
    std::cout << "Le constructeur par défault de Bureaucrat à été appelé" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
    this->_grade = 1;
    std::cout << "Le constructeur standard de Bureaucrat à été appelé" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    std::cout << "Le constrcuteur de copy de Bureaucrat à été appelé" << std::endl;
    *this = copy;
    return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    std::cout << "Opérateur d'affectation de bureaucrat appelé" << std::endl;
    this->_grade = src._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Le destructeur de Bureaucrat à été appelé" << std::endl;
    return;
}

std::string	Bureaucrat::getName(void)
{
	return (this->_name);
}

int Bureaucrat::getGrade(void)
{
    return (this->_grade);
}

void Bureaucrat::raiseGrade(void)
{
    try 
    {
        std::cout << "Essaie d'augmenter le grade de " << this->_name << std::endl;
        this->setGrade(this->_grade + 1);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "L'augmentation de " << this->_name << " à échouée" << e.what() << std::endl;
    }
}

void Bureaucrat::deRaiseGrade(void)
{
    try 
    {
        std::cout << "Essaie de diminuer le grade de " << this->_name << std::endl;
        this->setGrade(this->_grade - 1);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "La diminution de " << this->_name << " à échouée" << e.what() << std::endl;
    }
}

void	Bureaucrat::setGrade( int const grade )
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Grade trop haut !");
}


const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Grade trop bas !");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat *a)
{
	o << "Bureaucrat " << a->getName() << "a actuellement comme grade " << a->getGrade() << std::endl;
	return (o);
}