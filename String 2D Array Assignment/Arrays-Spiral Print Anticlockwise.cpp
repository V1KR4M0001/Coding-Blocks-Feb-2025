/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.


Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).


Constraints
Both M and N are between 1 to 10.


Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).


Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix(n, vector<int>(m));
	for(int i = 0 ;  i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
    vector<int> ans;
	int left = 0, right = m-1;
	int top = 0, bottom = n-1;

	while(top <= bottom && left <= right) {
		for(int i = top; i <= bottom; i++) {
			ans.push_back(matrix[i][left]);
		}
		left++;
		if(left > right) break;
		for(int i = left; i <= right; i++) {
			ans.push_back(matrix[bottom][i]);
		}
		bottom--;
		if(top > bottom) break;
		for(int i = bottom; i >= top; i--) {
			ans.push_back(matrix[i][right]);
		}
		right--;
		if(left > right) break;
		for(int i = right; i >= left; i--){
			ans.push_back(matrix[top][i]);
		}
		top++;
	}
	for(int i =0 ; i < ans.size(); i++) {
		cout << ans[i] << ", ";
	}
	cout << "END" << endl;

	return 0;
}