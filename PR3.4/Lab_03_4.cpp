// Lab_03_4.cpp
// Вольвенко Іван 
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.  
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R1;
	double R2;
	double x;
	double y;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((x <= 0 && y >= 0 && y <= sqrt(R2 * R2 - x * x)) || (x > 0 && y < 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}