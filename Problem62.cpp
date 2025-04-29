/*
Given a number N and an array A of N numbers. Print the array in a reversed order.

NOTE :
Don't use built-in-functions.

Input

First line contains a number N (1 ≤ N ≤ 10 pow 3) number of elements.
Second line contains N numbers (0 ≤ Ai ≤ 10 pow 9).

Output

Print the array in a reversed order
-------------------------------------------
EX 1 : 

input
4
5 1 3 2

output
2 3 1 5 

EX 2 :

input
5
1 2 3 4 5

output
5 4 3 2 1 
-------------------------------------------
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
	for (int j = count - 1; j >= 0; j--) {
		cout << n[j] << " ";
	}
}
