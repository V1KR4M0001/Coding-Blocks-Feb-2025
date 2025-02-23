/*
Given an N × N two-dimensional grid of integers representing a square matrix, rotate this matrix 90 degrees clockwise. Rearrange the matrix elements so that the values within each column of the original matrix are repositioned to become rows in the transformed matrix.


Input Format
The first line contains an integer N, the size of the square matrix.
The next N lines each contain N space-separated integers representing the elements of the matrix.

Constraints
1 ≤ N ≤ 1000
-10^6 ≤ matrix[i][j] ≤ 10^6

Output Format
Print the resulting matrix after the 90-degree clockwise rotation. On a new line print each row of the transformed matrix with elements separated by spaces.


Sample Input
3
1 2 3
4 5 6
7 8 9
Sample Output
7 4 1
8 5 2
9 6 3
Explanation
The input matrix is:

1 2 3
4 5 6
7 8 9
After a 90-degree clockwise rotation:

The first column of the original matrix (7, 4, 1) becomes the first row of the new matrix.
The second column (8, 5, 2) becomes the second row.
The third column (9, 6, 3) becomes the third row.
Thus, the output is:

7 4 1
8 5 2
9 6 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= 0; j--) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}