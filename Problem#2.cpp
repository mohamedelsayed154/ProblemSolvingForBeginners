/* Write a program print all prime numbers form 1 to N 

input : 10

output : 
1
2
3
5
7

*/

#include <iostream>
using namespace std;

int ReadNumber();
void PrimeOrNot(int n);

int main() {


}

int ReadNumber() {
	int n;
	cout << "Entre the number : ";
	cin >> n;
}

void PrimeOrNot(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			continue;
		}
		else {
			cout << i << endl;
		}
	}
}
