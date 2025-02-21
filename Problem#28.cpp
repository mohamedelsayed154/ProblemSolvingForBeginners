/*
Given a number X which donates a code and a real number Y which donates the amount of
an item. According to the following table , print the total price of buying Y amount of
the product that has X code 

input :

Only ine line containing X,Y ( 1 <= X <= 5 , 1 <= Y <= 100 )

output :

print " Total : R followed by the answer to the problem above , with 2 digits after the decimal
point

Example :

input : 23.00

output : 

Total : R 13.50

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
int x; 
  double y;
  cin >> x >> y;

  if ( x== 1) {
    cout << "Total : R " << fixed << setprecision(2) << y * 4.00 << endl;
  }
  else if ( x == 2 ) {
    cout << "Total : R " << fixed << setprecision(2) << y * 4.50 << endl ;
  }
  else if ( x == 3 ) {
    cout << "Total : R " << fixed << setprecision(2) << y * 5.00 << endl;
  }
  else if ( x == 4 ) {
    cout << "Total : R " << fixed << setprecision(2) << y * 2.00 << endl;
  }
  else if ( x == 5 ) {
    cout << "Total : R " << fixed << setprecision(2) << y * 1.50 << endl;
  }
  
}
