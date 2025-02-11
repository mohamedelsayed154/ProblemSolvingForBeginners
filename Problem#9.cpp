#include <iostream>
using namespace std;

int ValidNum();
void DigitToCheck( int num  );

int main() {
	int num = ValidNum();
	
	DigitToCheck(num);
}

int ValidNum() {
	int num;
	cout << "Entre the number = ";
	cin >> num;
	return num;
}

void DigitToCheck(int num) {
	int times = 0;
	int reminder = 0;
	for (int i = 0; i <= 9; i++) {
		times = 0;
		int temp = num;
		while (temp > 0) {
			reminder = temp % 10;
			temp /= 10;
			if (reminder  == i) {
				times++;
			}
			else {
				continue;
			}
		}
		if (times > 0) {
			cout << "Digit " << i << " frequency is " << times << endl;
		}
		else {
			continue;
		}
	}

}
