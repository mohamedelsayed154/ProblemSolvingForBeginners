#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        string binary = "";
        if (N == 0) {
            binary = "0";
        }
        else {
            while (N > 0) {
                binary += (N % 2) + '0'; 
                N /= 2;
            }
        }

        cout << binary << endl; 
    }

    
}
