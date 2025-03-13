/*
Write a program to fill array with max size 100 with random 
numbers from 1 to 100 , then print the count of Even numbers 

input : 10

output : 
Array elements : 14 92 70 15 58 76 84 62 10 43

Even numbers count is : 8

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(int arr[100], int ArraySize);
void EvenNumbers(int arr[100], int ArraySize);

int main() {
	srand(time(0));

	int arr[100], ArraySize;

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	FillArray(arr, ArraySize);
	EvenNumbers(arr, ArraySize);
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

void EvenNumbers(int arr[100], int ArraySize) {

	int counter = 0;
	for (int i = 0; i < ArraySize; i++) {
		if (arr[i] % 2 == 0) {
			counter++;
		}
		else {
			continue;
		}
	}
	cout << "Even Numbers count is : " << counter;
}
