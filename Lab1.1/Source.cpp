// Source.cpp
// Михайлов Олександр
// Поля та методи – дії над одним(поточним) об’єктом
// Варіант 19

#include <iostream>
#include "Combination.h"

using namespace std;

Combination MakeCombination(int f, int s) {
	Combination c;
	if (!c.Init(f, s))
		cout << " ERROR" << endl;
	return c;
}

int main() 
{
	Combination c;
	c.Read();
	c.Display();

	int first, second;
	cout << " Enter first: "; cin >> first;
	cout << " Enter second: "; cin >> second;

	c = MakeCombination(first, second);
	cout << endl << " C(n,k) = " << c.combination(first, second) << endl << endl;
	c.Display();

	cin.get();
	return 0;
}
