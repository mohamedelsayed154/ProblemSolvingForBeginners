/*
Write a program to fill array with numbers , then check if it is palindrom 
array or not 

NOTE : Palindrom array can be read the same from rigth to left and from left 
to right


input :
10 20 30 30 20 10

output :
Array Elements : 10 20 30 30 20 10

Yes , array is palindrom

*/


#include <iostream>
using namespace std;

int GetArray(int ArraySize, int arr1[100]);
void PrintFirstArray(int arr1[100], int ArraySize);
int FillArray2(int arr2[100], int arr1[100], int ArraySize);
void CheckPalindrom(int arr2[100], int arr1[100], int ArraySize);

int main() {
	int ArraySize;
	int arr1[100] , arr2[100];

	cout << "Entre Array Length : ";
	cin >> ArraySize;

	GetArray(ArraySize , arr1);
	PrintFirstArray(arr1, ArraySize);
	FillArray2(arr2, arr1, ArraySize);
	CheckPalindrom(arr2, arr1, ArraySize);

}

int GetArray(int ArraySize , int arr1[100]) {
	

	for (int i = 0; i < ArraySize; i++) {
		
		cout << "Entre the number : ";
		cin >> arr1[i];
		
	}

	return arr1[100] ;
}

void PrintFirstArray(int arr1[100], int ArraySize) {
	
	cout << endl <<  "Array Elements : ";

	for (int i = 0; i < ArraySize; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
}

int FillArray2(int arr2[100], int arr1[100], int ArraySize) {
	int test = ArraySize - 1;

	for (int i = 0; i < ArraySize; i++) {
		arr2[i] = arr1[test];
		test--;
	}
	
	cout << endl;
	return arr2[100];
}

void CheckPalindrom(int arr2[100], int arr1[100], int ArraySize) {
	
	int tester = 0;
	for (int i = 0; i < ArraySize; i++) {

		
		if (arr1[i] == arr2[i]) {
			continue;
		}
		else {
			cout << "No array isn't palindrom \n";
			tester = 1;
			break;
		}
		
	}
	if (tester == 0) {
		cout << "Yes array is palindrom\n";
	}
	
}
