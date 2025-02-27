/*
Write a program to fill array with max size 100 with random numbers from
1 to 100 , copy it to another array in reverse order and print it 

input : 10 

output : 

Array 1 elements :
64 8 62 19 2 21 15 74 96 85

Array 2 elements after copying array 1 in reversed order :
85 96 74 15 21 2 19 62 8 64

NOTE : Don't use a reverse for loop
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber();
int FillArray(int arr1[100], int ArraySize);
void PrintFirstArray(int arr1[100], int ArraySize);
int Swap(int arr2[100], int arr1[100], int ArraySize);
void PrintArrayAfterCopying(int arr2[100], int ArraySize);

int main() {

	srand(time(0));

	int arr1[100], arr2[100];
	int ArraySize = ReadPositiveNumber();
	FillArray(arr1, ArraySize);
	PrintFirstArray(arr1, ArraySize);
	Swap(arr2, arr1, ArraySize);
	PrintArrayAfterCopying(arr2, ArraySize);

}

int ReadPositiveNumber() {
	int ArraySize;

	do {
		cout << "Entre Array Length : ";
		cin >> ArraySize;
	} while (ArraySize <= 0);

	return ArraySize; 
}

int FillArray(int arr1[100],int ArraySize ) {

	for (int i = 0; i < ArraySize; i++) {
		arr1[i] = rand() % 101;
	}
	return arr1[100];
}

void PrintFirstArray(int arr1[100], int ArraySize) {

	cout << "Array 1 elements : \n";
	for (int i = 0; i < ArraySize; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl ;
}

int Swap(int arr2[100], int arr1[100], int ArraySize) {
	int j = 0;
	for (int i = ArraySize - 1; i >= 0; i--) {
		arr2[j] = arr1[i];
		j++;
	}
	return arr2[100];
}

void PrintArrayAfterCopying(int arr2[100], int ArraySize) {
	cout << endl;
	cout << "Array 2 elements after copying array 1 in reversed order : \n";

	for (int i = 0; i < ArraySize; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
}
