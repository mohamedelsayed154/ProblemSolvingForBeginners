/*
Write a program to guess a 3-letter password (all capital)

input : AAF 

output :
Trial [1] : AAA
Trial [2] : AAB 
Trial [3] : AAC 
Trial [4] : AAD 
Trial [5] : AAE 
Trial [6] : AAF

password is AAF
Found after 6 Trial(s)


*/


#include <iostream>
using namespace std;

string ValidPass();
void GueesPass (string password);

int main() {
	string password = ValidPass();
	GueesPass(password);
}

string ValidPass() {
	string pass;
	cout << "Entre password maximum 3 leeter : ";
	cin >> pass ;
	return pass;
}

void GueesPass(string password) {
	int num = 1;
	string CheckPass ;
	for (char i = 65; i <= 90; i++) {

		for (char x = 65; x <= 90; x++) {

			for (char j = 65; j <= 90; j++) {
				 CheckPass = string(1, i) + string(1, x) + string(1, j);
				cout << "Trial [ " << num << " ] : " << CheckPass << endl;
				if (CheckPass == password) {
					cout << "Password is " << CheckPass << endl;
					cout << "Found after " << num << " Triall(s)\n";
					return;
				}
				else {
					continue;
				}
				num++;
				
			}
		}
	}
}
