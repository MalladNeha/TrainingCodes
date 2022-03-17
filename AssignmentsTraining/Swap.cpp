#include<iostream>
using namespace std;

int main() {
	int a, b;
	a = 10;
	b = 20;
	cout << "\nBefore Swapping:" << a << " "<<b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "\n After Swapping:" << a << " " << b;

	return 0;
}