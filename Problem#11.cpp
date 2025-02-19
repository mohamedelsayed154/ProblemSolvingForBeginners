/* 
Write a program to read a number and check if it is palindrome ?
palindrome is a number that reads the some from right to left

input :
1234
12321

output:
No, it is n't a palindrome number 
yes, it is a palindrome number 

*/


#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
int Number = 0;
do
{
cout << Message << endl;
cin >> Number;
} while (Number <= 0);
return Number;
}
int ReverseNumber(int Number)
{
int Remainder = 0, Number2 = 0;
while (Number > 0)
{
Remainder = Number % 10;
Number = Number / 10;
Number2 = Number2 * 10 + Remainder;
}
return Number2;
}
bool IsPalindromeNumber(int Number)
{
return Number == ReverseNumber(Number);
}

int main()
{
if (IsPalindromeNumber(ReadPositiveNumber("Please enter a
positive number?")))
cout << "\nYes , it is a Palindrome number.\n";
else
cout << "\nNo , it is NOT a Palindrome number.\n";
return 0;
}

