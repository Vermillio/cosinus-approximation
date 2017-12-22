#pragma once

using namespace std;

namespace FuncApprox
{
	class CosApprox
	{
		double func(double x, double epsilon);
		int fact(int n);
	public:
		double operator() (double x, double epsilon);
	};
}