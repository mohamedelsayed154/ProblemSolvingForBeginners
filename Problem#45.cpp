/*
Write a program to fill array with max size 100 with random
numbers from -100 to 100 , then print the count of Negative
numbers

input : 10

output : 
Array Elements : -58 -16 -21 -4 -91 82 98 66 - -33

Negative Numbers count is : 7

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(int arr[100], int ArraySize);
void NegativeNumbers(int arr[100], int ArraySize);

int main() {
	srand(time(0));

	int arr[100], ArraySize;

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	FillArray(arr, ArraySize);
	NegativeNumbers(arr, ArraySize);
}

int FillArray(int arr[100], int ArraySize) {

	cout << "Array Element : ";

	for (int i = 0; i < ArraySize; i++) {
		arr[i] = (rand() % 201) - 100;
		cout << arr[i] << " ";

	}
	cout << endl << endl << endl;
	return arr[100];
}

void NegativeNumbers(int arr[100], int ArraySize) {

	int counter = 0;
	for (int i = 0; i < ArraySize; i++) {
		if (arr[i] < 0) {
			counter++;
		}
		else {
			continue;
		}
	}
	cout << "Negative Numbers count is : " << counter;
}
