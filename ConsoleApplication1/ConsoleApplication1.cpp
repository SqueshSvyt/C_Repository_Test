#include <iostream>

using namespace std;

int Factorial(int a) {
	int sum = 1;
	for (size_t i = 1; i <= a; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	cout << "Enter: ";
	int a;
	cin >> a;
	cout << Factorial(a);
	system("pause");
	return 0;
}