#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &value1, T &value2)
{
	T value3 = value1;
	value1 = value2;
	value2 = value3;
}

template <typename T>
T	&min(T &value1, T &value2)
{
	return (value1 >= value2 ? value2 : value1);
}

template <typename T>
T	&max(T &value1, T &value2)
{
	return (value1 <= value2 ? value2 : value1);
}
#endif
