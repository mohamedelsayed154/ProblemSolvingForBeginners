
/*
Write a program to fill array with ordered numbers from 1 to N 
then print it , after that shuffle this array and print it after shuffle

input : 10

output : 

Array elements before shuffle :
  1 2 3 4 5 6 7 8 9 10

  Array elements after shuffle :
  2 4 6 3 10 1 7 8 5 9 
*/

#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void FillArrayWith1toN(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1],
			arr[RandomNumber(1, arrLength) - 1]);
	}
}
	void PrintArray(int arr[100], int arrLength){
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	int main() {
		//Seeds the random number generator in C++, called only once
		srand((unsigned)time(NULL));
		int arr[100];
		int arrLength = ReadPositiveNumber("\nEnter number of elements: \n");
			FillArrayWith1toN(arr, arrLength);
		cout << "\nArray elements before shuffle:\n";
		PrintArray(arr, arrLength);
		ShuffleArray(arr, arrLength);
		cout << "\nArray elements after shuffle:\n";
		PrintArray(arr, arrLength);
		return 0;
	}
