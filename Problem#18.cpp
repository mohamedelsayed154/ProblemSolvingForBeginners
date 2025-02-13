#include <iostream>
#include <string>
using namespace std;

string ReadName();
string  Encryption(string name); 
void Decryption(string ReverseName);

int main() {
	Decryption( Encryption(ReadName()) );
}

string ReadName() {
	string name;
	cout << "Entre your name = ";
	getline(cin, name);
	cout << "Text before Encryption : " << name << endl;
	return name;
}
string  Encryption(string name) {
	
	string ReverseName ;
	for (int i = 0; i <= name.length(); i++) {
		ReverseName +=  char(name[i] + 2);
	}
	cout << "Text after Encryption : " << ReverseName << endl; 
	return ReverseName;
}

void Decryption(string ReverseName) {
	string DecryptionName ;
	for (int i = 0; i <= ReverseName.length(); i++) {
		DecryptionName += char(ReverseName[i] - 2);
	}
	cout << "Text after Decryption : " << DecryptionName << endl;
}
