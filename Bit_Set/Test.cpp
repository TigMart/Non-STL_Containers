// Bit_Set.cpp : 

#include "Bit_Set.h"

int main()
{
	BitSet<8> a(2);
	std::cout << "A: " << a << std::endl;
	BitSet<8> d(5);
	std::cout << "d: " << d << std::endl;
	a.set(5);
	std::cout <<"After set(1), A: "<< a << std::endl;
	std::string str = "1111111111111111111111111111111111111111111111111111111111111111111";
	BitSet<69> c(str);
	std::cout <<"C: "<< c << std::endl;
	std::cout <<"A and d: "<< (a & d)<<std::endl;
	return 0;
}
