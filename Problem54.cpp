/*
Meet Carlitos, a spirited adventure enthusiast with an insatiable love for amusement parks. Despite his vibrant passion, Carlitos faces a unique challenge – his height. As he eagerly plans his weekend escapade, he realizes that his vertical limitations might hinder his amusement park experience. It's not just about choosing a park; it's about finding one where he can enjoy the thrill of the rides.

Picture the kaleidoscope of colors, the jubilant laughter, and the heart-pounding rush of the rides. Carlitos has always been drawn to the energy of amusement parks. With the weekend approaching, he pores over park brochures, studying the height requirements of each ride. His goal is to maximize his enjoyment, and that's where you come in.

Your task is to help Carlitos determine the number of rides he can enjoy at a specific park. By considering his height and the minimum height requirements of each ride, guide him in making the most of his amusement park adventure.

Input

The first line contains two integers, N and H (1≤ N ≤ 6 and 90 ≤ H ≤ 200 ) , representing the number of rides in a park and Carlitos' height in centimeters, respectively.

The second line contains the minimum heights A1,…,AN (90 ≤ Ai ≤ 200 ) of each ride in the park.

Output
Output a single line with an integer indicating the number of rides Carlitos can go on, that is, the number of rides for which Carlitos' height
is at least as large as the minimum height required.

Examples  :

input 
1 100
100

output 
1

 EX : 

 input 
 6 120
200 90 100 123 120 169

output
3


*/

#include <iostream>
using namespace std;
 
int main() {
	int count = 0;
	
	int N; 
 
	do {
		
		cin >> N;
	} while (N < 1 || N > 6 );
 
	int H;
	do {
		cin >> H;
	} while (H < 90 || H > 200);
 
	for (int i = 0; i < N; i++) {
		int A;
		do {
			cin >> A;
		} while (A < 90 || A > 200);
		if (A <= H) {
			count++;
		}
	}
	cout << count << endl;
 
}
