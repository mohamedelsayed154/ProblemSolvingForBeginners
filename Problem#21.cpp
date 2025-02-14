

/*
Write a programme to read how many keys to generate and print them on the screen

input : 3

output : Key [1] : EHTJ-ASNF-FAQO-MVZC
         Key [2] : MFAD-AOQE-ZXCV-MNBV
		 Key [3] : QWER-TYUI-ASDF-LKJH

*/

#include <iostream>
#include <cstdlib>
using namespace std;


int ValidNum();
void GenerateKey(int NumKey);

int main() {
	srand(time(0));

	int NumKey = ValidNum();
	GenerateKey(NumKey);

	
}

int ValidNum() {
	int num;
	do {
		cout << "Entre the number of keys : ";
		cin >> num;
	} while (num < 0);

	return num;
}

void GenerateKey(int NumKey) {
	int m = 1;

	for (int i = 1; i <= NumKey; i++) {

		cout << "Key [" << i << "] : ";

		for (int x = 1; x <= 4; x++) {
			
			for (int j = 1; j <= 4; j++) {

				cout << char(rand() % (90 - 65 + 1) + 65);
			}
			if (m <= 3) {
				cout << "-";
			}
			else {
				continue;
			}
			m++;
				
			
				
			
			
		}
		cout << endl;
		m = 1;
	}


}
