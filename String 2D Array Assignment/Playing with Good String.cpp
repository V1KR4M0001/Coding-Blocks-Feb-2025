/*
A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.

Note: The time limit for this problem is 1 second, so you need to be clever in how you compute the substrings.


Input Format
A string 'S'


Constraints
Length of string < 10^5


Output Format
A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String.


Sample Input
cbaeicde
Sample Output
3
Explanation
Longest good substring is "aei"
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int ans = 0;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			cnt++;
		} else {
			
		ans = max(cnt, ans);
		cnt = 0;
		}
	}
	ans = max(cnt, ans);
	cout << ans;

	return 0;
}