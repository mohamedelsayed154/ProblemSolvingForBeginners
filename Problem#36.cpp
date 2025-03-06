/*
Write a program to fill array with max size 100 with random numbers from
1 to 100 , copy only odd numbers to another array using , and print it

input : 10

output :

Array 1 elements :
59 14 84 36 6 5148 91 96 69

Array 2 Odd numbers : 
59 51 91 67

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber();
int FillArray(int arr1[100], int ArraySize);
void OddNumber(int arr1[100], int arr2[100], int ArraySize);

int main() {
	srand(time(0));

	int ArraySize = ReadPositiveNumber();
	int arr1[100], arr2[100];
	FillArray(arr1, ArraySize);
	OddNumber(arr1, arr2, ArraySize);
}

int ReadPositiveNumber() {
	int ArraySize;
	do {
		cout << "Entre array length : ";
		cin >> ArraySize;
	} while (ArraySize < 0);

	return ArraySize;
}

int FillArray(int arr1[100], int ArraySize) {

	cout << "Array 1 elements : ";

	for (int i = 0; i < ArraySize; i++) {
		arr1[i] = rand() % 101;
		cout << arr1[i] << " ";
	}
	cout << endl << endl;
	return arr1[100];
}

void OddNumber(int arr1[100], int arr2[100], int ArraySize) {
	int timer = 0;

	cout << "Array 2 Odd Numbers : ";

	for (int i = 0; i < ArraySize; i++) {
		if (arr1[i] % 2 != 0) {
			arr2[timer] = arr1[i];
			cout << arr2[timer] << " ";
		}
		else {
			continue;
		}
		
	}
	cout << endl;
}
