/*
Write a program to fill array with max size 100 with random
numbers from -100 to 100 , then print the count of positive 
numbers

input : 10

output :
Array elements : 17 -9 -9 -90 -72 -100 -4 60 -84 -15

Positive numbers count is : 2

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(int arr[100], int ArraySize);
void PositiveNumbers(int arr[100], int ArraySize);

int main() {
	srand(time(0));

	int arr[100], ArraySize;

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	FillArray(arr, ArraySize);
	PositiveNumbers(arr, ArraySize);
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

void PositiveNumbers(int arr[100], int ArraySize) {

	int counter = 0;
	for (int i = 0; i < ArraySize; i++) {
		if (arr[i] > 0) {
			counter++;
		}
		else {
			continue;
		}
	}
	cout << "Positive Numbers count is : " << counter;
}
