#include "Pair.h"

Pair::Pair() : first(0), second(0) {}

Pair::Pair(int f, int s) : first(f), second(s) {}

Pair Pair::operator+(const Pair& other) const {
	return Pair(this->first + other.first, this->second + other.second);

}

string Pair::toString() const {
	stringstream ss;
	ss << "(" << first << ", " << second << ")";
	return ss.str();
}

void Pair::Display() const {
	cout << endl;
	cout << "First: " << first << endl;
	cout << "Second: " << second << endl;
} 

void Pair::Init(int f, int s) {
	setFirst(f);
	setSecond(s);
}

void Pair::Read() {
	int f, s;

	cout << "Input first number: "; cin >> f;
	cout << "Input second number: "; cin >> s;

	Init(f, s);
}