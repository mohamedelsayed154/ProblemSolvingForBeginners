

/*
   Write a program to fill array with max size 100 with random
   numbers form 1 to 100 , then print sum of all number 

   input : 10

   output : 

   Array Elements : 10 6 22 40 12 75 23 32 25 75
   Sum of all number is : 320


*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadSizeArray();
int FillArray(int SizeArray , int num[100]);
void  SumNumber(int num[100] , int SizeArray);


int main() {
    srand(time(0));
    int SizeArray = ReadSizeArray();
    int num[100];
    FillArray(SizeArray, num);
    SumNumber(num , SizeArray);
    
}


int ReadSizeArray() {
    int size;
    do {
        cout << "Entre number between 1 to 100  ";
        cin >> size;
    } while (size < 1 || size > 100);
    return size;
}
 
int FillArray(int SizeArray, int num[100]) {
     
    cout << "Array Elements : ";
    for (int i = 0; i < SizeArray; i++) {
        num[i] = rand () % 101 ;
       cout << num[i] << " ";

    }
    cout << endl;
    return num[100];
   
}

void  SumNumber(int num[100],int SizeArray ) {
     int sum = 0;
    for (int i = 0; i < SizeArray; i++) {
        sum += num[i];
    }
    cout << "Sum of all Number is : " << sum << endl;
}
