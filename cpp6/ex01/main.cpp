
#include <iostream>
#include <stdint.h>
#include "Serializer.hpp"

int main( void )
{
	t_Data* data;
	uintptr_t rawData;
	t_Data* retData;

	data = new t_Data;

	std::cout << "Data             : " << data << std::endl;
	rawData = Serializer::serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	retData = Serializer::deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;

	delete data;	
}
