/*
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

INPUT

First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

OUTPUT

Print the absolute difference between the summation of the matrix main diagonals.

--------------------------------------------------------------------------------------------

EX 1 

input
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6

output
22
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int count;
	cin >> count;
 
	long long arr[count][count] = {0};
 
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cin >> arr[i][j];
		}
	}
 
	int elemnt1 = 0, elemnt2 = 0;
 
	for (int m = 0; m < count; m++) {
		elemnt1 += arr[m][m];
	}
 
	int diognal = 0;
	for (int x = count - 1; x >= 0; x--) {
		elemnt2 += arr[diognal][x];
		diognal++;
	}
	
	cout << abs(elemnt1 - elemnt2) << endl;
}
