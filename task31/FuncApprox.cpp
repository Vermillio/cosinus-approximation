#include "FuncApprox.h"
#include <cmath>
#define pi 3.14159265359

double FuncApprox::CosApprox::func(double x, double epsilon)
{
	double sPrev;
	double sCur = 1;
	int n = 1;
	do
	{
		sPrev = sCur;
		sCur += pow(-1, n) * pow(x, 2 * n) / fact(2 * n);
		++n;
	} while (abs(sPrev - sCur) >= epsilon);
	return sCur;
}

int FuncApprox::CosApprox::fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	int s = 1;
	for (int i = 2; i <= n; ++i)
		s *= i;
	return s;
}

double FuncApprox::CosApprox::operator()(double x, double epsilon)
{
	while (x > pi)
		x -= 2 * pi;
	while (x < -pi)
		x += 2 * pi;
	
	//double y = x;
	//while (y >= pi)

	if (x >= -pi / 4 && x <= pi / 4)
		return func(x, epsilon);
	else if (x >= -pi / 2 && x <= pi / 2)
		return 2 * pow(func(x / 2, epsilon), 2) - 1;
	else if (x >= -3*pi/4 && x<= 3*pi/4)
		return 1 - 2 * pow(func((pi - x)/2, epsilon), 2);
	else return -func(pi-x, epsilon);
}
