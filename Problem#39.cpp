/*
Given two numbers N and M. Print the summation of their last digits.

input : 
Only one line containing two numbers N, M (0 ≤ N, M ≤ 10pow18).

output :
Print the answer of the problem

Example :
input : 13 12 
output : 5

NOTE : 
first example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    string str_x = to_string(x);
    string str_y = to_string(y);

    int length_x = str_x.length() - 1;
    int length_y = str_y.length() - 1;

    int int_x = str_x[length_x] - '0';
    int int_y = str_y[length_y] - '0';

    int sum = int_y + int_x;

    cout << sum << endl;
}
