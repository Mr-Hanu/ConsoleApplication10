#include "stdafx.h"
#include <iostream>

int enterIntegerOne()
{
	std::cout << "Please enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int enterIntegerTwo()
{
	std::cout << "Please enter another integer: ";
	int b;
	std::cin >> b;
	return b;
}

int multiplyIntegers(int a, int b)
{
	std::cout << a * b << std::endl;
	return 0;
}



int main()
{
	int x = enterIntegerOne();
	int y = enterIntegerTwo();
	multiplyIntegers(x, y);
    return 0;
}

