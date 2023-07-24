#include "contact.hpp"


Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

std::string	Contact::get_name(void) 
{
	return (this->_name);
}

std::string	Contact::get__surname(void) 
{
	return (this->_surname);
}

std::string	Contact::get__nickname(void) 
{
	return (this->_nickname);
}

std::string	Contact::get__phone_number(void) 
{
	return (this->_phone_number);
}

std::string	Contact::get_secret(void) 
{
	return (this->_darkest_secret);
}

void	Contact::set_name(std::string str)
{
    this->_name = str;
}

void	Contact::set__surname(std::string str)
{
	this->_surname = str;
}

void	Contact::set__nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set__phone_number(std::string str)
{
	this->_phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->_darkest_secret = str;
}