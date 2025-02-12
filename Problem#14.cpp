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
	
	for (char i =64 + num ; i >= 65 ; i--) {
		for (int j = 1; j <= num; j++) {
			cout << i;
		}
		cout << endl;
		num--;
	}
}
