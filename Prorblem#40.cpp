/*
Write a program to fill array with numbers , then print distinct
numbers to another array

output :
Array 1 e4lements :
10  10  10  50  50  70  70  90

Array 2 distinct elements :
10 50 70 90 

*/

#include <iostream>
using namespace std;

void PrintArray1(int arr1[100], int ArraySize1);
void ArrayDistince(int arr1[100], int ArraySize1);

int main() {
	int arr1[100] = { 10 , 10 , 10 , 50 , 50 , 70 , 70 , 90 };
	int ArraySize1 = 8;

	PrintArray1(arr1, ArraySize1);
	ArrayDistince(arr1, ArraySize1);
}

void PrintArray1(int arr1[100], int ArraySize1) {
	cout << "Array 1 elements : \n";

	for (int i = 0; i < ArraySize1; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
}

void ArrayDistince(int arr1[100], int ArraySize1) {
	int checker = arr1[0];

	cout << endl;
	cout << "Array 2 distince elements : \n";

	for (int i = 1; i <= ArraySize1; i++) {
		if (checker != arr1[i]) {
			cout << checker << " ";
			checker = arr1[i];
		}
		else { continue;
		}
	}
}
