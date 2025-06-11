/*
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier,
the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count,
so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

  INPUT

The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

OUTPUT

  Print the new sum that Xenia can count.

-----------------------------------------------------------------------------------------------
  EX 1

  input
  3+2+1
output
  1+2+3

  EX 2

  input
  1+1+3+1+3
output
  1+1+1+3+3
-----------------------------------------------------------------------------------------------
  */
#include <iostream>
using namespace std;

int main() {
	string operation;
	cin >> operation;
	int num_operation = operation.length();

	int arr[(num_operation + 1) /2] = { 0 };
	int j = 0;
	for (int i = 0; i < num_operation; i+=2) {
		arr[j] = operation[i] - '0';
		j++;
	}

	
	for (int x = 0; x < (num_operation + 1) / 2; x++) {
		for (int y = 0; y < (num_operation + 1) / 2; y++) {
			if (arr[x] < arr[y]) {
				int temp = arr[y];
				arr[y] = arr[x];
				arr[x] = temp;
			}
		}
	}

	for (int w = 0; w < (num_operation + 1) / 2; w++) {
		cout << arr[w] ;
		if (w < (num_operation + 1) / 2 - 1) {
			cout << "+";
		}
	}
}
