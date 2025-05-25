#include "Long.h"
using namespace std;

Long::Long() : value(0, 0) {}

Long::Long(int high, int low) : value(high, low) {}

Long Long::operator+(const Long& other) const {
	int low = value.getSecond() + other.value.getSecond();
	int high = value.getFirst() + other.value.getFirst();

	if (low >= BASE) {
		low -= BASE;
		high += 1;
	}

	return Long(high, low);
}

Long Long::subtract(const Long& other) const {
	long long this_val = (long long)value.getFirst() * BASE + value.getSecond();
	long long other_val = (long long)other.value.getFirst() * BASE + other.value.getSecond();

	long long result = this_val - other_val;

	int high = result / BASE;
	int low = result % BASE;
	if (low < 0) { low += BASE; high -= 1; }

	return Long(high, low);
}

Long Long::multiply(const Long& other) const {
	long long this_val = (long long)value.getFirst() * BASE + value.getSecond();
	long long other_val = (long long)other.value.getFirst() * BASE + other.value.getSecond();

	long long result = this_val * other_val;

	int high = result / BASE;
	int low = result % BASE;

	return Long(high, low);
}

void Long::Display() const {
	cout << "( " << value.getFirst() << ", " << value.getSecond() << ")" << endl;
}