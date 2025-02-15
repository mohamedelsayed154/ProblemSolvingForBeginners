

/*
Write a programme to read N elemnts and store them in array then print all array elements and ask for a number to check , then print how many number 
a certain element repeated in that array 

input :
5
Entre array elemnts :
Element [1] : 1
Element [2] : 1
Element [3] : 1
Element [4] : 2
Element [5] : 3

Entre the number you want to check : 1

output :
Original array : 11123
1 is repeated 3 time(s)

*/

#include <iostream>
using namespace std;

int getArraySize();
void fillArray(int arr[], int size);
void printArray(int arr[], int size);
void countRepeats(int arr[], int size, int target);

int main() {
    int size = getArraySize();
    int* arr = new int[size]; // int arr [size];

    fillArray(arr, size);

    int target;
    cout << "Enter the number you want to check: ";
    cin >> target;

    printArray(arr, size);
    countRepeats(arr, size, target);

    return 0;
}

int getArraySize() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    return size;
}

void fillArray(int arr[], int size) {
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void countRepeats(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    cout << target << " is repeated " << count << " time(s)\n";
}
