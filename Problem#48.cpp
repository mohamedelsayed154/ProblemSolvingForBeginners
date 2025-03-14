/*
Write a program to print floor of numbers , don't use built in 
floor function

input : 10.7

output : 

My Floor Result : 10
C++ Floor Result : 10

intput : -10.3

output : 

My Floor Result : -11
C++ Floor Result : -11
*/


#include <iostream>
#include <cmath>
using namespace std;




int main() {
	float num;
	cout << "Entre the number : ";
	cin >> num;

	if (num > 0) {
		cout << "My Floor Result : " <<int (num)  <<  endl;
	}
	else if (num < 0) {
		cout << "My Floor Result : " <<int (num) - 1 << endl;
	}
	cout << "C++ floor Result : " << floor(num) << endl;
}

