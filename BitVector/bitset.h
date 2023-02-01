class Bitvector
{
	unsigned long size;
	unsigned long* bit_array; 
public:
	Bitvector(unsigned long);
	void set(unsigned long);
	void reset(unsigned long);
	bool bit(unsigned long);
	void print_bits();
	~Bitvector();
};