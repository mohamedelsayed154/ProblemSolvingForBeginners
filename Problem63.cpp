/*
Given a number N and an array A of N numbers. 
Print the array after doing the following operations:

- Find minimum number in these numbers.
- Find maximum number in these numbers.
- Swap minimum number with maximum number.

Input

First line contains a number N (2 ≤ N ≤ 1000) number of elements.
Second line contains N numbers ( - 10 pow 5 ≤ A ≤ 10 pow 5)
It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

------------------------------------------------------
EX : 

input
5
4 1 3 10 8

output
4 10 3 1 8 
------------------------------------------------------
*/

#include <iostream>
using namespace std;
 
int main() {
	int count;
	cin >> count;
	int num[count];
 
	// cin Array
	for (int i = 0; i < count; i++) {
		cin >> num[i];
	}
 
	// check Min , Max
	int Min = num[0] ,  Max = num[0], MinTemp = 0,  MaxTemp = 0;
	for (int j = 1; j < count; j++) {
		if (Min > num[j]) {
			Min = num[j];
			MinTemp = j;
		}
		if (Max < num[j]) {
			Max = num[j];
			MaxTemp = j;
		}
	}
 
 
	int temp = num[MinTemp];
	num[MinTemp] = num[MaxTemp];
	num[MaxTemp] = temp;
 
	
 
 
	// print final result
	for (int m = 0; m < count; m++) {
		cout << num[m] << " ";
	}
}
