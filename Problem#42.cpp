/*
Write a program to fill array with max size 100 with random 
numbers from 1 to 100 , then print the count of Odd numbers 

input : 10

output : 
Array elements : 60 78 15 49 56 6 4 3 21 23

Odd numbers count is : 5

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(int arr[100], int ArraySize);
void OddNumbers(int arr[100], int ArraySize);

int main() {
	srand(time(0));

	int arr[100], ArraySize;

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	FillArray(arr, ArraySize);
	OddNumbers(arr, ArraySize);
}

int FillArray(int arr[100], int ArraySize) {

	cout << "Array Element : ";

	for (int i = 0; i < ArraySize; i++) {
		arr[i] = rand() % 101;
		cout << arr[i] << " ";

	}
	cout << endl << endl << endl;
	return arr[100];
}

void OddNumbers(int arr[100], int ArraySize) {

	int counter = 0;
	for (int i = 0; i < ArraySize; i++) {
		if (arr[i] % 2 != 0) {
			counter++;
		}
		else {
			continue;
		}
	}
	cout << "Odd Numbers count is : " << counter;
}
