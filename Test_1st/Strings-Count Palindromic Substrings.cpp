/*
Take as input S, a string. Write a program that gives the count of substrings of this string which are palindromes and Print the ans.


Input Format
Single line input containing a string


Constraints
Length of string is between 1 to 1000.


Output Format
Integer output showing the number of palindromic substrings.


Sample Input
abc
Sample Output
3
Explanation
For the given sample case , the palindromic substrings of the string abc are "a","b" and "c".So, the ans is 3.
*/
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s) {
	string str = s;
	reverse(str.begin(), str.end());
	return str == s;
}

int main() {
	string s;
	cin >> s;

	int cnt = 0;
	for(int i = 0; i < s.length(); i++) {
		for(int j = i; j < s.length(); j++) {
			int l=i;
			int r=j;
			int flag = 0;
			while(l<=r){
				if(s[l] != s[r]) {
					flag = 1;
					break;
				}
				l++,r--;
			}
			if(flag==0){
				cnt++;
			}
		}
	}
	
	cout << cnt << endl;
	return 0;
}