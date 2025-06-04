Hussien is so competitive, in this weekend he challenged his friends Ayman and Mohamed to reach the playground before them.
And because of his fitness, he won the race.
If you have the time that everyone took to reach the playground, can you guess which one belongs to Hussien ?.


  INPUT
  Three integers A, B and C ( 1 ≤ A , B , C ≤ 10000 )
 representing the time that everyone took to reach the playground in seconds.

  OUTPUT
  Print the time Hussien took to reach the playground.

---------------------------------------------------------------------
    EX 1 
  input
  100 140 130
output
  100
    EX 2
  input
  233 198 201
output
  198

  ---------------------------------------------------------------------
#include <iostream>
using namespace std;
 
int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    for (int i = 0; i < 3; i++){
        for (int j = 1; j < 3; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << arr[0] << endl;
}

  
