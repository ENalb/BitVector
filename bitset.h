class Bitvector
{
	unsigned long size;
	unsigned long bit_count;
	unsigned long array_size;
	unsigned long* bit_array; 
public:
	Bitvector(unsigned long);
	void set(unsigned long);
	void reset(unsigned long);
	bool bit(unsigned long) const;
	void print_bits() const;
	~Bitvector();
};