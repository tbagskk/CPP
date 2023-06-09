#include "phonebook.hpp"



int	Phonebook::verif(std::string str)
{
	if (str == "" )
		return (0);
	else 
		return (1);
}

void    Phonebook::add(void)
{
	if (this->index > 7)
	{
		std::cout << "Le 1er contact a ete remplacee par celui-ci";
		this->index = 0;
	}

    std::string str;
	str = "";
	while (verif(str) == 0)
	{
		std::cout << "prénom\n"; 
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_name(str);

	str = "";
	while (verif(str) == 0)
	{
		std::cout << "nom de famille\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_surname(str);

	str = "";
	while (verif(str) == 0)
	{
		std::cout << "surnom\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_nickname(str);
	
	str = "";
	
	while (verif(str) == 0)
	{
		std::cout << "numero de telephone\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_phone_number(str);

	str = "";
	while (verif(str) == 0)
	{
		std::cout << "votre secret\n";
		std::getline(std::cin, str);
	}
	this->contact[this->index].set_secret(str);

	this->index++; 
}

void	Phonebook::print(Contact contact)
{
	if (contact.get_name().size() == 0)
	{
		std::cout << "il n'y a aucun contact\n";
		return ;
	}
	std::cout << "Prenom : " << contact.get_name() << "\n";
	std::cout << "Nom de famille : " << contact.get_surname() <<  "\n";
	std::cout << "Nickname: " << contact.get_nickname() << "\n";
	std::cout << "Phone Number: " << contact.get_phone_number() << "\n";
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
		std::cout << "Le repertoire est vide mon reuf\n";
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	while (i < this->index)
	{	
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get_name()) << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get_surname()) << "|";
		std::cout << std::setw(10) << return_all(this->contact[i].get_nickname()) << "|\n";
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Choisis un index mon reuf\n";
		std::getline(std::cin, entries);
		if (entries == "STOP")
			break ;
		if (entries.size() == 1 && entries[0] >= '1' && entries[0] <= '8')
			this->print(this->contact[entries[0] - 1 - '0']);
		else if (entries != "")
			std::cout << "Index invalide mon reuf" << std::endl;
		
	}
}