#include "Long.h"

int main() {
	Long a(1, 100000); 
	Long b(2, 500000); 

	Long sum = a + b;   
	Long diff = a.subtract(b); 
	Long mult = a.multiply(b);


	cout << "Sum: "; sum.Display();
	cout << "Diff: "; diff.Display();
	cout << "Multiply: "; mult.Display();

	return 0;
}