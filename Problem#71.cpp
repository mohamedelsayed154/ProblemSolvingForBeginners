/*
Andryusha is an orderly boy and likes to keep things in their place.

Today he faced a problem to put his socks in the wardrobe. He has n distinct pairs of socks which are initially in a bag. The pairs are numbered from 1 to n.
  Andryusha wants to put paired socks together and put them in the wardrobe. He takes the socks one by one from the bag, and for each sock he looks whether 
the pair of this sock has been already took out of the bag, or not. If not (that means the pair of this sock is still in the bag), he puts the current socks on the table
in front of him. Otherwise, he puts both socks from the pair to the wardrobe.

Andryusha remembers the order in which he took the socks from the bag. Can you tell him what is the maximum number of socks that were on the table at the same time ?

INPUT

The first line contains the single integer n (1 ≤ n ≤ 105) — the number of sock pairs.

The second line contains 2n integers x1, x2, ..., x2n (1 ≤ xi ≤ n), which describe the order in which Andryusha took the socks from the bag. More precisely, xi means that the i-th sock Andryusha took out was from pair xi.

It is guaranteed that Andryusha took exactly two socks of each pair.

  OUTPUT

  Print single integer — the maximum number of socks that were on the table at the same time.

--------------------------------------------------------------------------------------------------------------

  EX 1

  input
  1
1 1

  output
  1

  EX 2

  input
  3
2 1 1 3 2 3

  output
  2

  --------------------------------------------------------------------------------------------------------------

  NOTE
  
In the first example Andryusha took a sock from the first pair and put it on the table. Then he took the next sock which is from the first pair as well, 
  so he immediately puts both socks to the wardrobe. Thus, at most one sock was on the table at the same time.

In the second example Andryusha behaved as follows:

Initially the table was empty, he took out a sock from pair 2 and put it on the table.
- Sock (2) was on the table. Andryusha took out a sock from pair 1 and put it on the table.
- Socks (1, 2) were on the table. Andryusha took out a sock from pair 1, and put this pair into the wardrobe.
- Sock (2) was on the table. Andryusha took out a sock from pair 3 and put it on the table.
- Socks (2, 3) were on the table. Andryusha took out a sock from pair 2, and put this pair into the wardrobe.
- Sock (3) was on the table. Andryusha took out a sock from pair 3 and put this pair into the wardrobe.
Thus, at most two socks were on the table at the same time.
  */

#include <iostream>
using namespace std;

bool on_table[100005] = {false}; 
 
int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n; 
 
    int current_socks_on_table = 0;
    int max_socks = 0;
 
    for (int i = 0; i < 2 * n; i++) {
        int sock_pair_number;
        cin >> sock_pair_number;
 
        if (on_table[sock_pair_number] == true) {
            on_table[sock_pair_number] = false;
            current_socks_on_table--;
        } else {
            on_table[sock_pair_number] = true;
            current_socks_on_table++;
        }
 
        if (current_socks_on_table > max_socks) {
            max_socks = current_socks_on_table;
        }
    }
 
    cout << max_socks << endl;
 
  
}
