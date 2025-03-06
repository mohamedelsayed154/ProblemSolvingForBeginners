/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C

Output
Print the next letter to C in the alphabet.

Example :
input : a
output : b

NOTE : The next letter to z is a.
*/


#include <iostream>
using namespace std;

int main() {
	char x;
	cin >> x;
	int m = 0;
	m = x + 1;
	if (x == 'z') {
		cout << 'a' << endl;
	}
	else {
		cout << char (m) << endl;
	}
	
}
