#pragma once
#include "Pair.h"
#include <iostream>

class Long {
private:
	Pair value;
	static const int BASE = 1000000;
public:
	Long();
	Long(int high, int low);

	Pair getPair() const {return value; }

	Long operator+(const Long& other) const;
	Long subtract(const Long& other) const;
	Long multiply(const Long& other) const;

	void Display() const;
};