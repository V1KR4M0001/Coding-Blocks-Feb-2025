/*
Sort just 0 and 1


Input Format
A line containing N number of 0s and 1s Next line follows a long sequence of 0 and 1 seperated by space


Constraints
N will not exceed 10^7


Output Format
Sorted Sequence


Sample Input
7
1 0 0 1 1 0 1
Sample Output
0 0 0 1 1 1 1
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int cnt0 = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == 0) {
			cnt0++;
		}
	}

	for(int i = 0; i < n; i++) {
		if(cnt0 > 0 and cnt0 > i) {
			cout << 0 << " ";
		} else {
			cout << 1 << " ";
		}
	}
	cout << endl;

	return 0;
}