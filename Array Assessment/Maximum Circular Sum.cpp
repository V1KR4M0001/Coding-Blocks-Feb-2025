/*
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].


Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.


Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000


Output Format
Print the maximum circular sum for each testcase in a new line.


Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)
*/

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr,int n, int k) {
	k = k%n;
	reverse(arr.begin(), arr.end());
	reverse(arr.begin(), arr.begin()+k);
	reverse(arr.begin()+k, arr.end());
}

int kadanes(vector<int> arr, int n) {
	int maxSum = arr[0];
	int currSum = arr[0];

	for(int i = 1; i < n; i++) {
		currSum = max(currSum + arr[i], arr[i]);
		maxSum = max(currSum, maxSum);
	}
	return maxSum;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int result = INT_MIN;

		for(int i = 0; i < n; i++) {
			rotate(arr, n, 1);
			int sum = kadanes(arr, n);
			result = max(result, sum);
		}
		cout << result << endl;
	}

	return 0;
}