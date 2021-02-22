// Combination.cpp

#include "Combination.h"
#include <iostream>

using namespace std;

unsigned int Combination::GetFirst() const {
	return first;
}

unsigned int Combination::GetSecond() const {
	return second;
}

void Combination::SetFirst(int value) {
	if (value > 0) {
		first = value;
	}
	else
		first = 0;
}

void Combination::SetSecond(int value) {
		second = value; // Значення одразу призначається,
						// оскільки second не може бути 0,
						// що перевіряється в Init
}

bool Combination::Init(int f, int s) {
	if (f >= 0 && s > 0 && s > f) {
		SetFirst(f);
		SetSecond(s);
		return true;
	}
	else
		return false;
}

void Combination::Read() {
	int f, s;

	do {
		cout << " Enter  first: "; cin >> f;
		cout << " Enter second: "; cin >> s;
		cout << endl;
	} while (!Init(f, s));
}

void Combination::Display() {
	cout << " First: " << first << endl;
	cout << " Second: " << second << endl << endl;
}

int Factorial(int value) {
	if (value == 0) {
		return 1;
	}
	else
		return value * Factorial(value - 1);
}

int Combination::combination(int f, int s) {
	return Factorial(s) / (Factorial(f) * Factorial(s - f));
}