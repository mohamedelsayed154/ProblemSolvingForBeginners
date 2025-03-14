/*
Write a program to print Sqrt of numbers , don't use built in
sqrt function

input : 25

output :
My Sqrt Result : 5
C++ sqrt result : 5

*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cout << "Entre the number : ";
	cin >> num;

	cout << endl;
	cout << "My sqrt result : " << pow(num , 0.5) << endl;
	cout << "C++ sqrt result : " << sqrt(num) << endl;
}
