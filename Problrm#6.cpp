/*
Write a program to read a number and print the sum of its digits

input : 1234

output : 
Sum of digits = 10

*/


#include <iostream>
using namespace std;

int ValidNum();
void SumDigits(int sum, int n);


int main() {
	int n = ValidNum();
	int sum = 0;
	SumDigits(sum, n);
}

int ValidNum() {
	int n;
	
	do {
		cout << "Entre the Num : ";
		cin >> n;
	} while (n < 0);
	return n;
}

void SumDigits(int sum, int n) {
	while (n > 0) {
		sum = sum + ( n % 10);
		n /= 10;
	}
	cout << "The Sum of last digits : " << sum << endl;

}
