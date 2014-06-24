#include <iostream>
#include "stdlib.h"
#include "math.h"

double angleToLine(double a);

int main(int argc, char const *argv[])
{
	/* code */


double a = 90;

std::cout << "sin(a)=" << sin(angleToLine(a)) << std::endl;
std::cout << "cos(a)=" << cos(angleToLine(a)) << std::endl;
std::cout << "tan(a)=" << tan(angleToLine(a)) << std::endl;
std::cout << "sqrt(a)=" << sqrt(a) << std::endl;
std::cout << "pow(a)=" << pow(a, 2) << std::endl;
	std::cout << "即将结束！";
	exit(1);

	return 0;
}

double angleToLine(double a) 
{
	const double pi = 3.14159265358;
 return	a/360*2*pi;
}