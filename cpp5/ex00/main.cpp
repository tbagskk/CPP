
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat *Bob = new Bureaucrat("Bob", 149);
	std::cout << Bob << std::endl;


	Bob->decreaseGrade();
	std::cout << Bob << std::endl;
	
	Bob->increaseGrade();
	std::cout << Bob << std::endl;

	try
	{
		std::cout << "Trying to set " << Bob->getName() << "'s grade to 0" << std::endl;
		Bob->setGrade(0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Trying to set " << Bob->getName() <<  "'s grade to 151" << std::endl;
		Bob->setGrade(151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete Bob;

	return (0);
}
