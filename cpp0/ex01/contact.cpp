#include "phonebook.hpp"




std::string	Contact::get_name(void) 
{
	return (this->name);
}

std::string	Contact::get_surname(void) 
{
	return (this->surname);
}

std::string	Contact::get_nickname(void) 
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void) 
{
	return (this->phone_number);
}

std::string	Contact::get_secret(void) 
{
	return (this->darkest_secret);
}

void	Contact::set_name(std::string str)
{
    this->name = str;
}

void	Contact::set_surname(std::string str)
{
	this->surname = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->darkest_secret = str;
}