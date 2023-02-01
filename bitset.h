class Bitvector
{
	unsigned long size;
	unsigned long bit_count;
	unsigned long array_size;
	unsigned long* bit_array; 
public:
	Bitvector(unsigned long);
	void setSize(unsigned long);
	unsigned long getSize() const;
	void setBit_count(unsigned long);
	unsigned long getBit_count() const;
	void setArray_size(unsigned long);
	unsigned long getArray_size() const;
	void set(unsigned long);
	void reset(unsigned long);
	bool bit(unsigned long) const;
	void print_bits() const;
	~Bitvector();
};