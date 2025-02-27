/*
Given 3 numbers A , B , C print these numbers in ascending order followed by a blank
line and then the values in the sequence as they were read

input : 
Only one line containing 3 numbers A , B , C 

output :

Print the values in ascending order followed by a blank line and then the values in the
sequence as they were read.

Example : 
input : 3 -2 1 

output :
-2  
1
3

3
-2
1
*/

#include <iostream>
using namespace std;
 
int main() {
 
	int a, b, c;
	cin >> a >> b >> c;
 
	// Small Num 
	if (a <= b && a <= c) {
		cout << a << endl;
	}
	else if (b <= a && b <= c) {
		cout << b << endl;
	}
	else if (c <= a && c <= b) {
		cout << c << endl;
	}
	 
	// Mid Num
	if (b <= a && a <= c || b >= a && a >= c) {
		cout << a << endl;
	}
	else if (a <= b && b <= c || a >= b && b >= c) {
		cout << b << endl;
	}
	else if (a <= c && c <= b || a >= c && c >= b) {
		cout << c << endl;
	}
 
	// Large Num
	if (a >= b && a >= c) {
		cout << a << endl;
	}
	else if (b >= a && b >= c) {
		cout << b << endl;
	}
	else if (c >= a && c >= b) {
		cout << c << endl;
	}
 
	cout << endl;
	cout << a << endl << b << endl << c;
 
}
