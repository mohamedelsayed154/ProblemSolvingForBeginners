/*
Given a number N  and an array A of N numbers.
Print the array after doing the following operations :

Replace every positive number by 1.
Replace every negative number by 2.

Input 

First line contains a number N (2 ≤ N ≤ 1000) number of elements.
Second line contains N numbers (-10 pow 5 ≤ A ≤ 10 pow 5).

Output

Print the array after the replacement and it's values separated by space.

Example 

input
5
1 -2 0 3 4

output
1 2 0 1 1 

---------------------------------------
input
9
-1 -5 2 3 100 -100 100000 0 -100000

output
2 2 1 1 1 2 1 0 2 
*/


#include<iostream>
using namespace std;
 
int main(){
    int count;
    cin >> count;
    int n[count];
    for (int i = 0; i < count; i++){
        cin >> n[i];
        if(n[i]> 0 ){
            n[i]= 1;
            
        }
        else if (n[i]< 0 ){
            n[i]= 2;
        }
        else if (n[i]== 0){
            n[i]= 0;
        }
    }
    for (int i = 0; i < count; i++){
        cout << n[i] << " ";
    }
}
