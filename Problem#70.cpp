/*
Sharapova has a pocket money which there are D dollars inside initially. Every day, she does one of the following operations.

-> Put X dollars inside the pocket money

-> Take Y dollars from the pocket money

In the second operation. If there isn't enough money to take, she won't take any thing.

Given what operation she will do in the N next days and D ( The initial amount of money ). You are asked to answer with the final amount of money in the pocket after the the N days.

  INPUT

In the first line, You are given N and D (1 <= N <= 10 pow 5), (0 <= D <= 10 pow 5). N is the number of days and D the initial amount of money.

In the next N line you are given which operation she will do in the following format.

-> "+ X" if she will do the first operation. (0 <= X <= 10 pow 5)

-> "- Y" if she will do the second operation. (0 <= Y <= 10 pow 5)

  OUTPUT

In a single line, print the final amount of money inside the pocket money.

  -----------------------------------------------------------------------------------

  EX 1 

  input
  3 5
+ 2
- 5
- 2

  output
  0

  EX 2

  input
  2 0
+ 2
+ 4

  output
  6
  -----------------------------------------------------------------------------------
  */

#include <iostream>
 
using namespace std;
 
int main() {
   
    long long days, FirstAmount;
    cin >> days >> FirstAmount;
 
    for (int i = 0; i < days; i++) {
        char operation;
        cin >> operation;
 
        long long x;
        cin >> x;
 
        if (operation == '+') {
            FirstAmount += x;
        }
        else if (operation == '-') {
            if (FirstAmount >= x) {
                FirstAmount -= x;
            }
        }
    }
 
    cout << FirstAmount << endl;
 
   
}
