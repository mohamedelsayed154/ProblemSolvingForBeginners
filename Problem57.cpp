/*

In this problem, you will need to separate and print the digits of a given input number.

it is guaranteed that if the entered number is more than 9 then the last digit of this number will never be a zero

Input
The first line of input contains an integer, T, which denotes the number of input you have to handle. Each of the next T lines contains an integer N ( 0 ≤ N ≤ 10 pow 15).

Output
For each input number, you have to print the digits separated by space.

Examples

input
3
121
39
123456

output
1 2 1 
3 9 
1 2 3 4 5 6 

*/

#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int count;
	cin >> count;
 
	for (int i = 0; i < count; i++) {
		long long num;
		cin >> num;
		string str = to_string(num);
		int Len = str.length();
 
		for (int i = 0; i < Len; i++) {
			cout << str[i] << " ";
		}
		cout << endl;
	}
}
