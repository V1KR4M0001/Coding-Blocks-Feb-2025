/*
Take as input a two-d array. Wave print it row-wise.


Input Format
Two integers M(row) and N(column) and further M * N integers(2-d array numbers).


Constraints
Both M and N are between 1 to 10.


Output Format
All M * N integers are seperated by commas with 'END' written in the end(as shown in example).


Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 12, 13, 14, 24, 23, 22, 21, 31, 32, 33, 34, 44, 43, 42, 41, END
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
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(cnt%2 == 0) {
			for(int j = 0; j < m; j++) {
				ans.push_back(matrix[i][j]);
			}
		} else {
			for(int j = m-1; j >= 0; j--) {
				ans.push_back(matrix[i][j]);
			}
		}
		cnt++;
	}
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ", ";
	}
	cout << "END";

	return 0;
}