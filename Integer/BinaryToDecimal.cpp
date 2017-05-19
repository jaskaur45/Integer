#include "stdafx.h"
#include <iostream>
#include <bitset>

int main() {

	int binary;
	std::cout << "Please Enter Your Binary Bits:";
	std::cin >> binary;
	std::bitset<10>decimal(binary);
	std::cout << decimal;
	int pause;
	std::cin >> pause;
	return 0;

}