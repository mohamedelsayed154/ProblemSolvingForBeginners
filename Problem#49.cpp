/*
Write a program to print Ceil of numbers , don't use built in 
Ceil function

input : 10.7

output : 

My Ceil Result : 10
C++ Ceil Result : 10

intput : -10.3

output : 

My Ceil Result : -11
C++ Ceil Result : -11
*/


#include <iostream>
#include <cmath>
using namespace std;




int main() {
	float num;
	cout << "Entre the number : ";
	cin >> num;

	if (num > 0) {
		cout << "My Ceil Result : " <<int (num) + 1 <<  endl;
	}
	else if (num < 0) {
		cout << "My Ceil Result : " <<int (num)  << endl;
	}
	cout << "C++ Ceil Result : " << ceil(num) << endl;
}

