/*
Write a program to read a number and print a inverted pattern as follows ?

input : 3                         input : 5

output : 
1                                 output :
22                                1
333                               22
                                  333
				  4444
                                  55555
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
		cout << "Entre the numer =  ";
		cin >> num;
	} while (num < 0);
	return num;
}

void InvertedPattern(int num) {
	
	for (int i = 1; i <= num ; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
