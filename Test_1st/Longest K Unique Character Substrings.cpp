/*
Jeetu Bhaiya has given you a string and you to print the size of the longest possible substring that has exactly k unique characters.
If there is no possible substring then print -1.


Input Format
The first line of input contains an integer T denoting the no of test cases. Each test case contains two lines. The first line of each test case contains a string s and the next line contains an integer k.


Constraints
1<=T<=100
1<=k<=10


Output Format
For each test case in a new line print the required output.


Sample Input
2
aaaa
1
qmb
6
Sample Output
4
-1
*/

#include<bits/stdc++.h>
using namespace std;

int freq(vector<int>& ans) {
	int count = 0;
	for(int i = 0; i < 26; i++) {
		if(ans[i] > 0) count++;
	}
	return count;
}

int fxn(string s, int k) {
	int n = s.size();

	if(k > n)	return -1;
	
	int i = 0, j = 0;
	int maxi = -1;
	vector<int> ans(26, 0);
	while(j < n) {
		ans[s[j] - 'a']++;

		while(freq(ans) > k) {
			ans[s[i] - 'a']--;
			i++;
		}

		if(freq(ans) == k) {
			maxi = max(maxi, j - i + 1);
		}
		j++;
	}
	return maxi;
}

int main() {
	int t;
	cin >> t;
    cin.ignore();
	while(t--) {
		string s;
		getline(cin , s);
		int k;
		cin >> k;
        cin.ignore();
		cout << fxn(s, k) << endl;
	}
	return 0;
}