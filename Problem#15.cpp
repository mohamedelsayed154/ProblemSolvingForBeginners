#include <iostream>
using namespace std;

int ValidNum();
void InvertedLetter(int num);

int main() {
	int num = ValidNum();
	InvertedLetter(num);
}

int ValidNum() {
	int num;

	do {
		cout << "Entre the numer ( 1 - 26) : ";
		cin >> num;
	} while (num <= 0 ||  num > 26);
	return num;
}

void InvertedLetter(int num) {
	int num2 = 1;
	for (char i ='A' ; i <= 'A' + num - 1; i++) {
		for (int j = 1; j <= num2 ;j++) {
			cout << i;
		}
		cout << endl;
		num2++;
	}
}
