/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.


Input Format
A single String S


Constraints
1 < = length of String < = 1000


Output Format
The compressed String.


Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;

   string temp;
   int n=s.size();

   for(int i=0; i<n; i++)
   {
       int cnt=1;
       while(s[i]==s[i+1])
       {
           cnt++;
           i++;
       }
       temp.push_back(s[i]);
       temp +=to_string(cnt);
   }
   cout<<temp;

    return 0;
}
