#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *KimJongHung = new Bureaucrat("KimJongHung");

    try 
    {
        std::cout << KimJongHung << std::endl;
        KimJongHung->raiseGrade();
        std::cout << KimJongHung << std::endl;
        KimJongHung->deRaiseGrade();
        std::cout << KimJongHung << std::endl;
        KimJongHung->setGrade(150);
        KimJongHung->raiseGrade();
        std::cout << KimJongHung << std::endl;


    }

    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}