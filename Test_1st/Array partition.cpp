/*
You are given an integer array nums of 2*n integers, group these integers into n pairs (a1, b1), (a2, b2), …, (an, bn) such that the sum of min(ai, bi) for all i is maximized.

Print the maximized sum.


Input Format
First Line contains an integer N.
Second Line contains an integer array.


Constraints
1 <= N <= 104
-104 <= Array[i] <= 104


Output Format
Print the maximized sum


Sample Input
6 
6 2 6 5 1 2
Sample Output
9 
Explanation
pairs : (1,2) , (2,5) and (6,6)
min(1,2) + min(2,5) + min(6,6) => 1+2+6 = 9
*/

#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    for(int i = 0; i < n; i+=2) {
        sum += min(arr[i], arr[i+1]);
    }
    cout << sum;
}