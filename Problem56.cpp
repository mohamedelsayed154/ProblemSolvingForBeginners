/*
Little Charles was one of the best competitive programmers in the world. However, he never really liked programming. Now that he is retired, 
he can dedicate his studies to what he really loves: continued fractions.

To prepare for the upcoming Imensa Competição de Phrações Contínuas (ICPC), he needs to solve the following problem:

Define p0 = 1
 as the level 0 fraction. Then define:

p1 = 1 / 1 + 1

as the level 1 fraction, p1. 
And also,

p2 = 1 / 1 + 1 / 1 + 1

as the level 2 fraction, p2, and so on.

Given an integer value N , help Charles determine the value of the numerator of the fraction pN

Input 

The first and only line contains an integer N (1 ≤ N ≤ 40).

Output

The value pN can be written as a fraction of the form ab, where a and b are coprime. 
Print a line containing the value of a

Examples 

input
2

output
2

input
10

output
89

*/

#include <iostream>
using namespace std;
 
int main(){
    int N;
    do {
        cin >> N;
        
    }while (N < 1 || N > 40);
    
    int n = 1;
    int t = 1;
    
    for (int i = 0; i < N; i++){
        int temp = t;
        t += n;
        n = temp;
    }
    cout << n << endl;
}
