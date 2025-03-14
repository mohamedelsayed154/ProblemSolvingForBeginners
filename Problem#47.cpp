/*
Write a program to print round of numbers , don't use built in
round function

input : 10.7

output :
My Round Result : 11
C++ Round Result : 11

input : -11.3

output : 
My Round Result : -11
C++ Round Result : -11
*/


#include <iostream>
#include <cmath>
using namespace std;

float FractionNum(float num);
void CheckFunction(int num, int fraction);


int main() {
	float num;
	cout << "Entre the number : ";
	cin >> num;
	int fraction = FractionNum(num);
	CheckFunction(num, fraction);
	
	cout << "C++ abs Result : " << round(num) << endl;
}

float FractionNum(float num) {
	float fraction = (num - int(num)) * 10;

	return fraction;
}

void CheckFunction(int num, int fraction) {
	if (fraction > 4) {
		cout << "My abs Result : " << int(num) + 1 << endl;
	}
	else {
		cout << "My abs Result : " << int(num) << endl;
	}
}

