/*
Write a program to fill array with max size 100 with random numbers from 
1 to 100 read number and  return its index in array if found otherwise

input : 10

output : 
Array 1 elements 
80 79 12 80 81 29 3 37 25 91

Pleas enter a number ? 12

Number your are looking for is : 12 
The number found at position : 2
The number found its order : 3

input : 10 

output : 
Array 1 elements : 
80 79 12 80 81 29 3 37 25 91 

please entre a number to serch for ? 55
Number you are looking for is : 55
The number is n't found 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber();
int FillArray(int arr[100], int ArraySize);
void NumberPosition(int arr[100], int ArraySize, int NumberToCheck);

int main() {
	srand(time(0));

	int arr[100], NumberToCheck;
	int ArraySize = ReadPositiveNumber();
	FillArray(arr, ArraySize);
	

	cout << "Entre number your are looking for : ";
	cin >> NumberToCheck;
	cout << "Number you are looking for is : " << NumberToCheck << endl;
	NumberPosition(arr, ArraySize, NumberToCheck );
}

int ReadPositiveNumber() {
	int ArraySize;
	do {
		cout << "Entre number 1-100 : ";
		cin >> ArraySize;
	} while (ArraySize > 100 || ArraySize <= 0);
	return ArraySize; 
}

int FillArray(int arr[100], int ArraySize) {
	cout << "Array 1 elements : \n";

	for (int i = 0; i < ArraySize; i++) {
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	return arr[100];
}

 void NumberPosition(int arr[100], int ArraySize, int NumberToCheck) {

	int NumberOrder = 0;
	for (int i = 0; i < ArraySize; i++) {
		if (NumberToCheck == arr[i]) {
			cout << "The number found a position : " << i  << endl; 
			NumberOrder = i + 1;
			cout << "The number found its order : " << NumberOrder << endl;
		}
		
	}
	if (NumberOrder == 0) {
		cout << "The number is n't found \n";
	}

}
