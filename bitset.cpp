#include <iostream>
#include "bitset.h"

Bitvector::Bitvector(unsigned long s) 
	: size(s), bit_count(64), array_size(s / bit_count + 1), bit_array(new unsigned long[array_size])
{} 

void Bitvector::setSize(unsigned long s)
{
	size = s;
}

unsigned long Bitvector::getSize() const
{
	return size;
}

void Bitvector::setBit_count(unsigned long b)
{
	bit_count = b;
}

unsigned long Bitvector::getBit_count() const
{
	return bit_count;
}

void Bitvector::setArray_size(unsigned long a)
{
	array_size = a;
}

unsigned long Bitvector::getArray_size() const
{
	return array_size;
}

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

bool Bitvector::bit(unsigned long index) const
{
	return (bit_array[index / bit_count] & (1 << (index % bit_count))) != 0;
}

void Bitvector::print_bits() const
{
	for(int i = size - 1; i >= 0; --i)
	{
		std::cout << bit(i);
	}
	std::cout << std::endl;
}

Bitvector::~Bitvector()
{
	delete[] bit_array;
}