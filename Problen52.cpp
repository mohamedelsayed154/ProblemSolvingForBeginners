/*
Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.

input : 
2
5
3

output : 
120
6

NOTE : 
Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point.

Thus, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 .

Factorial zero is defined as equal to 1.

In first test case for N = 5 , 5! = 1 * 2 * 3 * 4 * 5 = 120 so the answer is 120.

In Second test case for N = 3 , 3! = 1 * 2 * 3 = 6 so the answer is 6.

*/

#include <iostream>
using namespace std;
 
int main(){
    int count;
    cin >> count;
    
    while(count > 0){
        int case;
        cin >> case;
        
        long long num = 1;
        
        for (int i = 1; i <= case; i++){
            num *= i;
        }
        cout << num << endl;
        count--;
    }
}
