/* 
write a programe to check if to check 
the number is perfect or not ? 
Note : prefer number = sum(all divisors)

28 = 1+ 2 + 3 + 7 + 14
6 = 1 + 2 + 3

input : 
28
12

output : 
28 is perfect 
12 is n't perfect
*/

#include <iostream>
using namespace std;

int ScanNumber();
int CheckNumber(int n);
void PerfectOrNot(int sum, int n);

int main() {
    int n = ScanNumber(); 
    int sum = CheckNumber(n);
    PerfectOrNot(sum, n);
}

int ScanNumber() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    return n;
}

int CheckNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) { 
            sum += i;
        }
    }
    return sum;
}

void PerfectOrNot(int sum, int n) {
    if (n == sum) {
        cout << n << " is perfect\n";
    }
    else {
        cout << n << " is not perfect\n"; 
    }
}
