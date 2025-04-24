/*
Vinicius is at a board meeting of the "Instituto de Consultoria de Palestras e Comentários" (ICPC) thinking that it would be great if the board 
members were more concise and kept their speeches within the time allotted for each director, so that the meeting could end before lunch.
Unfortunately, perhaps due to the nature of the institution, everyone loves to talk.

Knowing that

- there are N directors who will speak at the meeting;
- each director will speak for the same amount of time;
- and that between two consecutive speeches there is a 1-minute interval,
- determine the maximum length of each speech, in minutes, so that the meeting lasts no more than K minutes.

Input

The first line contains an integer N (1 ≤ N ≤ 100), the number of directors.
The second line contains an integer K (1 ≤ K ≤ 1000 and K ≥ N), the maximum meeting duration in minutes. 
For all input cases, each director's speech lasts at least 1 minute.

Output

Your program should output a single line, containing a single integer, indicating the length of each board member's speech, in minutes.

Examples

Input
7
120

output
16

input
1
10

output
10

input
100
1000

output
9


NOTE :
Explanation for sample 1: There are 7 directors and the maximum meeting length is 120 minutes. If each director speaks for 16 minutes, we have 16 × 7 = 112
 minutes. Since there are six breaks between speeches, and each break lasts one minute, we have 118 minutes in total. Note that, in this case, two minutes of the meeting time are not used
 , and that, if the speeches were longer than 16 minutes, the total time would exceed the 120-minute limit.

Explanation for sample 2: There is only one director and the meeting lasts 10 minutes. Therefore, the maximum speaking time of the director is 10
 minutes.
*/ 

#include <iostream>
using namespace std;
 
int main() {
	int N, K;
	do {
		cin >> N;
	} while (N < 1 || N > 100);
 
	do {
		cin >> K;
	} while (K < 1 || K > 1000);
 
	if (N == 1) {
		cout << K << endl;
		return 0;
	}
	int time = K- (N - 1);
	int TimeToDirectors = time / N;
	cout << TimeToDirectors << endl;
}
