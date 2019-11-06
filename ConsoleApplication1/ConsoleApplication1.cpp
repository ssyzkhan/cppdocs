// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include "CodeByLinXu.h"
class Calculator {
public:
	void PrimeNumber(int, int);
};
int main()
{

	/*
    std::cout << "Please enter two number:\n";
	int x, y;
	std::cin >> x >> y;
	Calculator c;
	c.PrimeNumber(x, y);
	*/
	LangFeature lan;
	lan.testPrintf();
	lan.variableAndscanf();
	lan.areaOfCylinder();

}
void Calculator::PrimeNumber(int x, int y) {
	for (int i = x; i <= y; i++) {
		bool isPrime = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << i << " ";
		}
	}
}
