/*
Write a program to read a number and print it reversed 

input : 
1234

output :
Reverse is : 4321

*/

#include <iostream>
using namespace std;

int ValidNum();
void ReverseNum(int num, int sum);

int main() {
	int num = ValidNum();
	int sum = 0;
	ReverseNum(num, sum);
}

int ValidNum() {
	int num; 
	do {
		cout << "Entre the number : ";
		cin >> num;
	} while (num < 0);
	return num ;
	
}

void ReverseNum(int num, int sum) {
	cout << "Reverse is : " ;
	while (num > 0) {
		sum = num % 10;
		cout << sum;
		num /= 10;
	}
	cout << endl;
	
}
