#include <iostream>

using namespace std;

const int Max_n = 100;

int Factorial(int a) {
	int sum = 1;
	for (size_t i = 1; i <= a; i++) {
		sum *= i;
	}
	return sum;
}
void  pullm(int mas[], int n) {
	for (size_t i = 0; i < n; i++){
		cout << "Enter numeber: ";
		cin >> mas[i];
		cout << endl;
	}
}

int main() {
	cout << "Enter a number for factorial: ";
	int a;
	cin >> a;
	cout << Factorial(a) << endl;
	cout << "Enter n of massive: " << endl;
	int n = 0;
	cin >> n;
	int mas[Max_n];
	pullm(mas, n);
	for (size_t i = 0; i < n; i++) {
		cout << "Your mass " << i << ": "<< mas[i] << endl;
	}
	system("pause");
	return 0;
}
