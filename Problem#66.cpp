/*
Ragaey wants to travel around the world yet he faces a little problem he doesn't have enough money in his bank account and he is so 
impatient and doesn't want to wait till he saves enough money so he decided to hack the bank.

He spent so many hours on the internet searching for how can he hack the bank?! and finally he found a way that allows him to rearrange
all the digits in his bank account to format a new number and then finally he can multiply this number by 2 but only once.

For example, if his initial bank account contained 4179$

He can rearrange its digits to 9741$ and then multiply this new number by 2. eventually he will end up having 19482$

so Ragaey doesn't know how can he rearrange the digits in order to get the maximum amount of money.

He knows that you are a brilliant programmer so he asked you to help him and create for him a program that

Reads how many digits are in the number in his bank account.
Reads the number he has in his bank account.
Prints for him the maximum amount of money he can end up having.

Input

The first line contains a single Integer N ( 1 <= N <= 8 ) represents the number of digits in his bank account.
The second line contains a Single integer X made up of N digits ( 1 <= X <= 108 ) represents the initial number in his bank account.

Output

Print a single integer represents the maximum amount of money he can end up having.

-------------------------------------------------------------------------------------------------
Example

Input : 
4
4179

Output : 
19482

EX 
Input
5
12345

Output
108642

NOTE :

The first example is explained in the statement

The second example:

the number 12345 can be rearranged into 54321 and then multiply it by 2, finally you will get 108642
*/



// This solution isn't clean code.

#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int num;
	cin >> num;
	string str_num = to_string(num);
	int arr[2000];
 
	for (int i = 0; i < n; i++) {
		arr[i] = str_num[i] - '0';
	}
 
	int temp = 0;
 
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
 
	int num2 = arr[0]
	for (int x = 1; x < n; x++) {
		num2 = num2 * 10 + arr[x];
	}
 

	int result = num2 * 2;
	cout << result << endl;
}
