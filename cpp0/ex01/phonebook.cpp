#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	this->var = 0;
}

Phonebook::~Phonebook(void)
{
	
}

int	Phonebook::verif(std::string str)
{
	if (str == "")
		return (0);
	else 
		return (1);
}

void    Phonebook::add(void)
{
	if (this->index > 7 )
	{
		std::cout << "The 1st contact has been replaced by this one";
		this->index = 0;
		this->var = 7;
	}

    std::string str;
	str = "";
	while (verif(str) == 0 && std::cin.eof() == 0)
	{
		std::cout << "Name\n"; 
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_name(str);

	str = "";
	while (verif(str) == 0 && std::cin.eof() == 0)
	{
		std::cout << "Surname\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set__surname(str);

	str = "";
	while (verif(str) == 0 && std::cin.eof() == 0)
	{
		std::cout << "Nickname\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set__nickname(str);
	
	str = "";
	
	while (verif(str) == 0 && std::cin.eof() == 0)
	{
		std::cout << "Phone Number\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set__phone_number(str);

	str = "";
	while (verif(str) == 0 && std::cin.eof() == 0)
	{
		std::cout << "Your darkest\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_secret(str);

	this->index++; 
	if (this->var <= 7)
		this->var++;
}

void	Phonebook::print(Contact contact)
{
	if (contact.get_name().size() == 0)
	{
		std::cout << "No contact\n";
		return ;
	}
	std::cout << "Name : " << contact.get_name() << "\n";
	std::cout << "Surname : " << contact.get__surname() <<  "\n";
	std::cout << "Nickname: " << contact.get__nickname() << "\n";
	std::cout << "Phone Number: " << contact.get__phone_number() << "\n";
	std::cout << "Darkest Secret: " << contact.get_secret() << "\n";

}

std::string Phonebook::return_all(std::string str)
{
	if (str.length() > 10)
        str = str.substr(0, 9) + ".";
	return (str);
}

void	Phonebook::search(void)
{
	int i = 0;
	std::string entries;

	if (this->index == 0)
	{
		std::cout << "The directory is empty\n";
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	while (i < this->var)
	{	
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get_name()) << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get__surname()) << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get__nickname()) << "|\n";
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Select an index | Enter 'STOP' to return to directory\n";
		std::getline(std::cin, entries);
		if (entries == "STOP")
			break ;
		if (entries.size() == 1 && entries[0] >= '1' && entries[0] <= '8')
			this->print(this->contact[entries[0] - 1 - '0']);
		else if (entries != "")
			std::cout << "Invalid index" << std::endl;
		
	}
}