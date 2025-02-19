/*
  Write a progrm to read a number and print it in a reversed order

  input : 1234

  output : 
  4
  3
  2
  1
  

*/


#include <iostream>
using namespace std;

int ValidNum() {
	
	int num;
	do {
		cout << "Entre the number first : ";
		cin >> num;
	} while (num < 0);
	return num;
}

void ReversedNum(int num , int sum) {
	while (num > 0) {
		 sum = num % 10;
		num /= 10;
		cout << sum << endl;
	}
}


int main() {
	int num = ValidNum(); 
	int sum;
	ReversedNum(num , sum );  
	
}
