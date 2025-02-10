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
