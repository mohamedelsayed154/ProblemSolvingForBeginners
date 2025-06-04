/*

You have an empty array and q
 queries, each of them in the following format:

1x : add x in the array
2x : print the number of occurrence of x in the array

INPUT
The First line of input contains n, q (1 ≤ n , q ≤ 10 pow 5)

The next q lines contain two integers z(1 ≤ z ≤ 2), x( 1 ≤ x ≤ n )

OUTPUT
For each query from the second type print the occurrence of the given number.

--------------------------------------------------------------------------------------
EX 1 
input
6 7
1 1
1 6
1 3
2 1
1 3
2 3
2 5

output
1
2
0


*/

#include <iostream>
 
using namespace std;
 
 
 
int main() {
 
int n, q;
 
cin >> n >> q;
 
 
 
int arr[100001] = { 0 };
 
 
 
for (int i = 0; i < q; i++) {
 
int z = 0, x = 0;
 
 
 

 
do {
 
cin >> z;
 
} while (z != 1 && z != 2);
 
 
 

 
cin >> x;
 
 
 
if (z == 1) {
 
arr[x]++;
 
} else if (z == 2) {
 
cout << arr[x] << endl;
 
}
 
}
 
}
