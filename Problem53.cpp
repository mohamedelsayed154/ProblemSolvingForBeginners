/*
Mr. Ya Rajaie has N books and wants to put them in bookshelves, each bookshelf can have at most 5 books. Find the minimum number of bookshelves needed to store the N books.

Input : 
The first line of input contains a single integer T, the number of test cases.

Each test case contains a single integer N (1 ≤ N ≤ 10 pow 9), the number of Ya’s books.

Output : 
For each test case, print on a single line the minimum number of bookshelves needed to store the books.

Example : 

Input : 
2
7
15

Output :
2
3

*/

#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin >> t;
 
	for (int i = 0; i < t; i++) {
		long long num;
		cin >> num;
 
		long long count = num / 5;
		if (num % 5 != 0) {
			count++;
		}
		cout << count << endl;
	}
 
}
