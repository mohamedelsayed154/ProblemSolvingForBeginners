/*
Write a program to dynamically read numbers and save them in an array 
max size of array is 100 , allocate simi-dynamic array length

Output : 
Entre a number : 10
Do you want to add more numbers ?  [0] NO , [1] yes : 1

Entre a number : 20
Do you want to add more numbers ?  [0] NO , [1] yes : 0

Array Length : 2 
Array elements : 10 20

*/

#include <iostream>
using namespace std;

enum enChecker {No = 0 , Yes = 1};

int ReadArray(int num[100], int& ArraySize);
void PrintArray(int num[100], int ArraySize);

int main() {
	int num[100], ArraySize;
	ReadArray(num, ArraySize);
	PrintArray(num, ArraySize);
}

int ReadArray(int num[100], int& ArraySize) {
	int check = 0;
	ArraySize = 1;
	for (int i = 0; i < ArraySize; i++) {
		check = 0;
		cout << "Entre the number : ";
		cin >> num[i];
		cout << endl << "Do you want add more numbers ? [0]NO , [1] YES :";
		cin >> check;
		if (check == enChecker::Yes) {
			ArraySize++;
		}
		else { break; }
	}
	return num[100];
}

void PrintArray(int num[100], int ArraySize) {
	cout << endl << endl << "Array Length : " << ArraySize << endl;

	cout << "Array elements : ";
	for (int i = 0; i < ArraySize; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}
