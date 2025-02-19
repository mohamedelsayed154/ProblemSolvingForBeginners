

/*
   Write a programe to fill array with max size 100 
   with random numbers form 1 to 100 , then print Max

   input : 10

   output : 

    Array Elements : 65 91 54 42 75 32 53 57 30 
    Max number is : 91


*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadSizeArray();
int FillArray(int SizeArray , int num[100]);
void  MaxNumber(int num[100] , int SizeArray);


int main() {
    srand(time(0));
    int SizeArray = ReadSizeArray();
    int num[100];
    FillArray(SizeArray, num);
    MaxNumber(num , SizeArray);
    
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

void  MaxNumber(int num[100],int SizeArray ) {
    int max = num[0];
    for (int i = 1; i < SizeArray; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        else {
            continue;
        }

        
    }
    cout << "Max Number is : " << max << endl;
}
