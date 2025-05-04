/*
Given a number N and an array A of N numbers.
Print the numbers after sorting them.

Note:

Don't use built-in-functions.
try to solve it with bubble sort algorithm or Selection Sort.
for more information watch - (Selection Sort) : https://youtu.be/EnodMqJuQEo.
for more information watch - (Bubble Sort) : https://youtu.be/pIEGHDZHOCk.

Input

First line contains a number N
 (0 < N < 10 pow 3 ) number of elements.
 Second line contains N numbers (−100 ≤A ≤ 100)

Output

Print the numbers after sorting them.
--------------------------------------------------------
EX 1 :

input
3
3 1 2

output
1 2 3

EX 2 :
input
4
5 2 7 3

output
2 3 5 7 

*/

#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[n];
 
	// cin Array 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min;
	for (int j = 0; j < n; j++) {
		for (int m = j; m < n; m++) {
			if (a[j] > a[m]) {
				min = a[j];
				a[j] = a[m];
				a[m] = min;
 
			}
		}
	}
 
	// print the result 
	for (int z = 0; z < n; z++) {
		cout << a[z] << " ";
	}
}
