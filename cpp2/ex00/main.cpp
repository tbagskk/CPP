#include "Fixed.h"

int main(void)
{
    Fixed one;
    Fixed two(one);
    Fixed three;

    three = two;

    std::cout << one.getRawBits() << std::endl;
	std::cout << two.getRawBits() << std::endl;
	std::cout << three.getRawBits() << std::endl;
	return 0;
}