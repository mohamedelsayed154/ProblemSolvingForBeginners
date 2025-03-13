/*
Write a program to print abs of numbers , don't use built in abs
function

input : -10

output : 
My abs Result : 10
C++ abs Result : 10

*/


#include <iostream>
#include <cmath>
using namespace std;

int ValidNumber();

int main() {
	int num = ValidNumber();
	
	cout << "My abs Result : " << num * -1 << endl;
	cout << "C++ abs Result : " << abs(10) << endl;
}

int ValidNumber() {
	int num; 

	do {
		cout << "Entre the number : ";
		cin >> num;
	} while (num >= 0);
	return num;
}


