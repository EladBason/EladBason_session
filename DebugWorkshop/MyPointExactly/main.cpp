#include "Point.h"
#include <iostream>

//1a - the purpose of the code is to print two points tat meant to be the same
//1b - not as excpected because i thought that it will print the value of the points
//1c,c - didnt stop becaue the function didnt called

//2a - no, p2 didn't copied well

int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	//added the print of this two points
	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	p2 = p2;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}
