/*
Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.


Input Format
String


Constraints
Length of string should be between 1 to 1000.


Output Format
String


Sample Input
abcg
Sample Output
badf
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int cnt=0;
	string temp;
	for(int i=0; i<s.size();i++)
	{
		if(cnt%2==0)
		{
			char ch=s[i]+1;
			temp.push_back(ch);
		}
		else
		{
			char ch=s[i]-1;
			temp.push_back(ch);
		}
		cnt++;
	}
	cout<<temp;
	return 0;
}