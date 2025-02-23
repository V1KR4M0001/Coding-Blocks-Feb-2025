/*
Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.


Input Format
String


Constraints
Length of string should be between 1 to 1000.


Output Format
String


Sample Input
abC
Sample Output
ABc
Explanation
Toggle Case means to change UpperCase character to LowerCase character and vice-versa.
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	string temp;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]>='A' &&  s[i]<='Z')
		{
			char ch=s[i]+32;
			temp.push_back(ch);
		}
		else
		{
			char ch=s[i]-32;
			temp.push_back(ch);
		}
	}
	cout<<temp;
	return 0;
}