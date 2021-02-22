// Combination.h

#pragma once

class Combination
{
private:
	double first, second;

public:
	unsigned int GetFirst() const;
	unsigned int GetSecond() const;
	void SetFirst(int);
	void SetSecond(int);

	bool Init(int, int);
	void Read();
	void Display();

	int combination(int, int);
};

