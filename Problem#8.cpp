/*
Write a program read a digit and a number , then print digit frequency in that number

input : 
1223222
2 

ouput :
Digit 2 Frequency is 5 Time(s)

*/
	
#include <iostream>
using namespace std;

int main() {

	int num, DigitToCheck, reminder;
	int times = 0;
	cout << "Entre the number : ";
	cin >> num;
	cout << "Entre the digit to check : ";
	cin >> DigitToCheck;

	while (num > 0) {
		reminder = num % 10;
		num /= 10;
		if (DigitToCheck == reminder) {
			times++;
		}
		else {
			continue;
		}
	}
	cout << "Digits " << DigitToCheck << " Frequency is " << times << " time (s)\n";
}
