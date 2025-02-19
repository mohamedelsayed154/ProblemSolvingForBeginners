

/*
   Write a program to fill array with max size 100 with random 
   number form 1 to 100 , then print average of all number 

   input : 10

   output :

   Array Element : 24 36 44 73 8 56 98 67 33 71 
   Average of all number : 51

   NOTE : Don't forget that Average may contain decimal numbers


*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadSizeArray();
int FillArray(int SizeArray , int num[100]);
void  AverageNumber(int num[100] , int SizeArray);


int main() {
    srand(time(0));
    int SizeArray = ReadSizeArray();
    int num[100];
    FillArray(SizeArray, num);
    AverageNumber(num , SizeArray);
    
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

void  AverageNumber(int num[100],int SizeArray ) {
     int sum = 0;
    for (int i = 0; i < SizeArray; i++) {
        sum += num[i];
    }
    cout << "Average of all Number is : " << (float) sum  / SizeArray << endl;
}
