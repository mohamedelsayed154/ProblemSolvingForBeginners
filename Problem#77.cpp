                                                                  [Equal Candies] (https://codeforces.com/contest/1676/problem/B)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		for (int x = 0; x < n; x++) {
			cin >> arr[x];
		}

		int min = arr[0];
		for (int i = 1; i < n; i++) {
			if (min > arr[i]) {
				min = arr[i];
			}
		}

		long long sum = 0; 
		for (int y = 0; y < n; y++) {
			sum += arr[y] - min;
		}

		cout << sum << endl;
	}
}
