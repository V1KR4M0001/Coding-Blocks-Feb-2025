/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.


Input Format
String


Constraints
A string of length between 1 to 1000


Output Format
String


Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/


#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.size();
	string temp;
	
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		
		temp.push_back(s[i]);
		
		while(s[i]==s[i+1])
		{
			cnt++;
			i++;
		}
	}
	cout<<temp;
	return 0;
}