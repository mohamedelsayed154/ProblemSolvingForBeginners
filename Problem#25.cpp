

/*
   Write a program to fill array with max size 100 with random
   numbers form 1 to 100 , then print Minimum Number 

   input : 10 

   output :
   
   Array Elements : 30 99 72 47 95 67 29 13 80 64
   Min Number : 13


*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadSizeArray();
int FillArray(int SizeArray , int num[100]);
void  MinNumber(int num[100] , int SizeArray);


int main() {
    srand(time(0));
    int SizeArray = ReadSizeArray();
    int num[100];
    FillArray(SizeArray, num);
    MinNumber(num , SizeArray);
    
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

void  MinNumber(int num[100],int SizeArray ) {
    int min = num[0];
    for (int i = 1; i < SizeArray; i++) {
        if (num[i] < min) {
            min = num[i];
        }
        else {
            continue;
        }

        
    }
    cout << "Min Number is : " << min << endl;
}
