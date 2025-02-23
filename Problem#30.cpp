
/*
Write a program to fill array two arrays with max size 100 with random
numbers from 1 to 100 , sum their elements in a third array and print the 
results

input : 10

output : 

Array 1 elements :
 42 68 35 1 70 25 79 59 63 65

 Array 2 elements :
 6 46 82 28 62 92 96 43 28 37

 Sum of array 1 and array 2 elements :
 48 114 117 29 132 117 175 102 91 102 

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int FirstArray(int arr[100], int ArraySize);
int SecondArray(int arr2[100], int ArraySize);
void SumArray(int arr1[100], int arr2[100], int ArraySize);

int main() {
	srand(time(0));
	int arr1[100], ArraySize;
	int arr2[100];

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	FirstArray(arr1, ArraySize);
	SecondArray(arr2, ArraySize);
	SumArray(arr1, arr2, ArraySize);
}

int FirstArray(int arr1[100], int ArraySize) {

	cout << "Array 1 elements : " << endl;

	for (int i = 0; i < ArraySize; i++) {
		arr1[i] = rand() % 101 ;
		cout << arr1[i] << " ";
	}
	cout << endl;
	return arr1[100];
}

int SecondArray(int arr2[100], int ArraySize) {
	cout << endl;
	cout << "Array 2 elements : " << endl;

	for (int i = 0; i < ArraySize; i++) {
		arr2[i] = rand() % 101;
		cout << arr2[i] << " ";
	}
	cout << endl;
	return arr2[100];
}

void SumArray(int arr1[100], int arr2[100], int ArraySize) {
	cout << endl;
	cout << "Sum of array 1 and array 2 elements : " << endl;

	for (int i = 0; i < ArraySize; i++) {
		cout << arr1[i] + arr2[i] << " ";
	}
	cout << endl;
}
