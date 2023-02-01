#include <iostream>
#include "bitset.h"

Bitvector::Bitvector(unsigned long s) 
	: size(s), bit_count(64), array_size(s / bit_count + 1), bit_array(new unsigned long[array_size])
{} 

void Bitvector::set(unsigned long index)
{
	if(index < 0 || index >= size)
	{
		std::cout << "Index out of range!" << std::endl;
		return;
	}
	bit_array[index / bit_count] |= 1 << (index % bit_count);
}

void Bitvector::reset(unsigned long index)
{
	if(index < 0 || index >= size)
	{
		std::cout << "Index out of range!" << std::endl;
		return;
	}
	bit_array[index / bit_count] &= ~(1 << (index % bit_count));
}

bool Bitvector::bit(unsigned long index)
{
	return (bit_array[index / bit_count] & (1 << (index % bit_count))) != 0;
}

void Bitvector::print_bits()
{
	for (int i = size - 1; i >= 0; --i) {
      std::cout << bit(i);
    }
    std::cout << std::endl;
}

Bitvector::~Bitvector()
{
	delete[] bit_array;
}