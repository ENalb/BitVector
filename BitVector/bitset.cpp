#include <iostream>
#include "bitset.h"

Bitvector::Bitvector(unsigned long s) : size(s), bit_array(new unsigned long[s / 64 + 1]){} 

void Bitvector::set(unsigned long index)
{
	if(index < 0 || index >= size)
	{
		std::cout << "Index out of range!" << std::endl;
		return;
	}
	bit_array[index / 64] |= 1 << (index % 64);
}

void Bitvector::reset(unsigned long index)
{
	if(index < 0 || index >= size)
	{
		std::cout << "Index out of range!" << std::endl;
		return;
	}
	bit_array[index / 64] &= ~(1 << (index % 64));
}

bool Bitvector::bit(unsigned long index)
{
	return (bit_array[index / 64] & (1 << (index % 64))) != 0;
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