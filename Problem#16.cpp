/*
Write a program ro print all words from AAA to ZZZ

output :
AAA
AAB
AAC
.
.
.
ZZZ


*/


#include <iostream>
using namespace std;

int main() {
	
	for (char i = 65; i <= 90; i++) {

		for (char x = 65; x <= 90; x++) {

			for (char j = 65; j <= 90; j++) {
				cout << i << x << j << endl;
			}
		}
	}
	
}
