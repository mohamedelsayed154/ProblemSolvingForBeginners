/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input

First line contains a number N (2 ≤ N ≤ 1000) number of elements.
Second line contains N numbers (-10 pow 5  ≤  A  ≤  10 pow 5).

Output

Print the lowest number and its position (1-index).
---------------------------------------------
EX 1 :

input
3
1 2 3

output
1 1

EX 2 : 

input

5
5 6 2 3 2

2 3

------------------------------------
*/

#include <iostream>
using namespace std;
 
int main() {
	int count;
	cin >> count;
	int n[count];
 
	for (int i = 0; i < count; i++) {
		cin >> n[i];
	}
 
	int num = n[0];
	int position = 1;
	for (int j = 1; j < count; j++) {
		if (num > n[j]) {
			num = n[j];
			position = j + 1;
		}
	}
	cout << num << " " << position << endl;
}
