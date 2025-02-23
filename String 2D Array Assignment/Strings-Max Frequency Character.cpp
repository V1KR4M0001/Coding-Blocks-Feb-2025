/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.


Input Format
String


Constraints
A string of length between 1 to 1000.


Output Format
Character


Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int freq[26] = {0};
	for(int i = 0; i < s.length(); i++) {
		char ch = s[i];
		int idx = ch - 'a';
		freq[idx]++;
	}

	int pos = 0;
	int maxi = INT_MIN;
	for(int i = 0; i < 26; i++) {
		if(freq[i] > maxi) {
			maxi = freq[i];
			pos = i;
		}
	}

	char ch = 'a' + pos;

	cout << ch;
	
	return 0;
}