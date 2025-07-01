                                                                                    Lucky?
(https://codeforces.com/contest/1676/problem/A)

#include <iostream>
using namespace std;

int main() {
	
	int t; 
	cin >> t;
	while (t--) {
		int num;
		cin >> num;
		int arr[6];
		int mult = 10;
		for (int i = 0; i < 6; i++) {
			arr[i] = num % mult;
			num /= 10;
		}
		int FirstDigit = arr[3] + arr[4] + arr[5];
		int LastDigit = arr[0] + arr[1] + arr[2];
		if (FirstDigit == LastDigit) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	
	
}
