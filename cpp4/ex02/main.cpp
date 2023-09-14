#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int	size = 2;
	Animal *animals[size];

	for(int i = 0; i < size; i++)
	{
		if (i < size / 2)	
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(int i = 0; i < size; i++)
		delete animals[i];

	return (0);

}