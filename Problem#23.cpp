

/*
    Write a program to fill array with max size 100 with random 
    number form 1 to 100 

    input : 10

    output : 
    Array elements : 
    56 55 83 71 32 52 17 28 71 52

    NOTE : I wrote notes about if you want to do this via array


*/

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadSizeArray();
void FillArray(int SizeArray );

int main() {
    int SizeArray = ReadSizeArray();
    
    FillArray(SizeArray);
    
}


int ReadSizeArray() {
    int size;
    do {
        cout << "Entre number between 1 to 100 : ";
        cin >> size;
    } while (size < 0 || size > 100);
    return size;
}

void FillArray(int SizeArray  ) {
    // int num[100];
    cout << "Array Elements : ";
    for (int i = 0; i < SizeArray; i++) {
      //  num[i] = rand () % 101;
       cout << rand() % 101 << " ";

    }
    cout << endl;
   
}
