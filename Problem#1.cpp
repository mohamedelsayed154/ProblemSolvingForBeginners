/* Write a program print the multiplication table from 1 to 10 */


#include <iostream>
using namespace std;

void PrintHeader();

int main() {
	PrintHeader();
	for (int i = 1; i <= 10; i++) {

		if (i < 10) {
			cout << i << "   |";
		}
		else {
			cout << i << "  |";
		}
		 for (int j = 1; j <= 10; j++) {
			 
			 if (j * i < 10) {
				 cout <<  j * i << "  ";
			 }
			 else {
				 cout << j * i << " ";
			 }
		} 
		
		cout << "\n";
	}
}

void PrintHeader() {
	cout << "     1  2  3  4  5  6  7  8  9  10\n";
	cout << "----------------------------------\n";
}
