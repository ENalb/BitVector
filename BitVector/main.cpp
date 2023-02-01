#include <iostream>
#include "bitset.h"

int main()
{
	Bitvector b(25);
	b.print_bits();
	b.set(5);
	b.print_bits();
	b.set(8);
	b.print_bits();
	b.set(12);
	b.print_bits();
	b.set(22);
	b.print_bits();
	b.print_bits();
	b.reset(5);
	b.print_bits();
}