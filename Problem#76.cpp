                                                             [Triple]( https://codeforces.com/group/isP4JMZTix/contest/380288/problem/A )

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		int FreqArr[n + 1] = { 0 };  

		for (int x = 0; x < n; x++) {
			cin >> arr[x];
			FreqArr[arr[x]]++;
		}

		bool found = false;
		for (int j = 0; j < n; j++) {
			if (FreqArr[arr[j]] >= 3) {
				cout << arr[j] << endl;
				found = true;
				break;
			}
		}
		if (!found) cout << "-1\n";
	}
}
