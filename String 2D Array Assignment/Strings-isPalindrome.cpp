/*
Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.


Input Format
String


Constraints
String length between 1 to 1000 characters


Output Format
Boolean


Sample Input
abba
Sample Output
true
Explanation
A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome as it's reverse is "abba", but “abbc” is not palindrome as it's reverse is "cbba".
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

	if(palindrome(s)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	return 0;
}