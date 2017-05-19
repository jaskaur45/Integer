// Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>


int main()
{
		int Decimalnum;
		std::cout << "Enter Decimal Number:";
		std::cin >> Decimalnum;
		std::bitset <8> bin(Decimalnum); // bitset with 8 bits(can change to 16 bits and so on); bin is a bitset variable;
		std::cout << bin;  
	    int pause;
	    std::cin >> pause;
	    return 0;
}

