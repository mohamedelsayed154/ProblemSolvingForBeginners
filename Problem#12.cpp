/*
Write a program to read a number and print inverted pattern as follows ?

input : 3                 input : 5

output :                  output :
333                         55555
22                          4444
1                           333
                            22
			    1


*/


#include <iostream>
using namespace std;

int ValidNum();
void InvertedPattern(int num);

int main() {
	int num = ValidNum();
	InvertedPattern(num);
}

int ValidNum() {
	int num;

	do {
		cout << "Entre the numer ";
		cin >> num;
	} while (num < 0);
	return num;
}

void InvertedPattern(int num) {
	for (int i = num; i > 0; i--) {
		for (Int j = 1; j <= i; j++){
			cout << i;
		}
		cout << endl;
	}
}
