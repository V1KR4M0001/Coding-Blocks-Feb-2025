/*
Recently Priya noticed that some of the buttons of his keyboard are malfunctioning. For simplicity, we assume that Priya's keyboard contains 26 buttons (one for each letter of the Latin alphabet). Each button is either working fine or malfunctioning.

To check which buttons need replacement, Priya pressed some buttons in sequence, and a string s appeared on the screen. When Priya presses a button with character c , one of the following events happened:

if the button was working correctly, a character c appeared at the end of the string Priya was typing; if the button was malfunctioning, two characters c appeared at the end of the string. For example, suppose the buttons corresponding to characters a and c are working correctly, and the button corresponding to b is malfunctioning. If Priya presses the buttons in the order a, b, a, c, a, b, a, then the string he is typing changes as follows: a → abb → abba → abbac → abbaca → abbacabb → abbacabba.

You are given a string s which appeared on the screen after Priya pressed some buttons. Help Priya to determine which buttons are working correctly for sure (that is, this string could not appear on the screen if any of these buttons was malfunctioning).

You may assume that the buttons don't start malfunctioning when Priya types the string: each button either works correctly throughout the whole process, or malfunctions throughout the whole process.

Note : The string res should contain all characters which correspond to buttons that work correctly in alphabetical order, without any separators or repetitions


Input Format
Single line consisting of a string of lowercase letters.


Constraints
1 <= s.length <= 1000


Output Format
print one line containing a string res.


Sample Input
cbddbb
Sample Output
bc
Explanation
Keys 'b' and 'c' are working properly.
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int i = 0, j = 1;
	int n = s.size();

	vector<int> ans(26, 0);
    while(i < n and j < n) {
        if(s[i] == s[j]) {
            i += 2;
            j += 2;
        } else {
            ans[ s[i]-'a' ]++;
            i++;
            j++;
        }
    }
    if(i == n-1) {
        ans[s[i] - 'a']++;
    }
    string str;
    for(int i = 0; i < 26; i++) {
        if(ans[i] > 0) {
        str += i+'a';
        }
    }
    cout << str << endl;

	return 0;
}