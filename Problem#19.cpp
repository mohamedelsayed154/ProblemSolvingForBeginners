


/*
   Write a programme to print 3 random numbers form 1 to 10 

   output : 
   7 
   9 
   10
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));

	cout << rand() % 11 << endl;
	cout << rand() % 11 << endl;
	cout << rand() % 11 << endl;
}
