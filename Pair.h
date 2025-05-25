#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;


class Pair {
private:
	int first;
	int second;
public:
	Pair();
	Pair(int f = 0, int s = 0);


	int getFirst() const { return first; }
	int getSecond() const { return second; }

	void setFirst(int f) { first = f; }
	void setSecond(int s) { second = s; }


	Pair operator+(const Pair& other) const;
	string toString() const;
	void Display() const;
	void Init(int f, int s);
	void Read();
};