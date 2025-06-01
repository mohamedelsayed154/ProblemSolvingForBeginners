/*

Now after Ragaey successfully hacked the bank. He thought he had enough money to make a trip around the world.

So he started searching on the internet for the tickets prices to the countries he wishes to visit.

But he found out there is too many countries he wants to visit and he doesn't know if he has enough money 
in his bank account to visit all of them so he decided to visit as many countries as he can so he asked you 
to create a program for him that

- Reads how much money he has in his bank account.
- Reads how many countries he wishes to visit.
- Reads how much the ticket to each country costs.
- Prints the maximum number of countries he can visit (possibly zero).

INPUT 
The first line contains a single integer X(0 <= X <= 10 pow 15) represents the amount of money in his bank account.

The second line contains a single integer N (1 <= N <= 10 pow 5) represents how many countries on Ragaey's list.

The next N lines each line will contain an integer Ti ( 1 <= Ti <= 10 pow 15 ) each represents a price of a ticket for some country.

OUTPUT
Print a single integer the maximum number of countries Ragaey can visit.

--------------------------------------------------------------------------
EXAMPLE : 

input : 
10000
4
7000
1000
3200
3800

output :
3

input :
1000
6
1400
200
300
350
500
150

output :
4
--------------------------------------------------------------------------
Note

In the first example:
Ragaey should buy 3 tickets with prices 1000 , 3200 , 3800.
Int the second example:
Ragaey should buy 4 tickets with prices 200, 300 , 350 , 150.
*/

#include <iostream>
#include <algorithm> 
 
using namespace std;
 
int main() {
    int CountMoney, CountCountry;
    cin >> CountMoney >> CountCountry;
 
    int Cost[CountCountry];
 
    for (int i = 0; i < CountCountry; i++) {
        cin >> Cost[i];
    }
 
    
    sort(Cost, Cost + CountCountry);
 
    int count = 0;
    for (int j = 0; j < CountCountry; j++) {
        
        if (CountMoney - Cost[j] >= 0) {
            count++;
            CountMoney -= Cost[j];
        } else {
            break;
        }
    }
 
    cout << count;
    
    
}
