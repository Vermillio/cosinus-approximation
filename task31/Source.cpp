//Cosinus approximation


#include "FuncApprox.h"
#include <iostream>

using namespace std;
using namespace FuncApprox;

int main()
{
	CosApprox cosin;
	double x;
	double eps;
	cout << "Enter x (rad) : " << endl;
	cin >> x;
	cout << "Enter epsilon : " << endl;
	cin >> eps;
	cout << cosin(x, eps) << endl;
	system("pause");
	return 0;
}