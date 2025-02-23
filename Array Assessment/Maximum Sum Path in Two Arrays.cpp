/*
You are provided two sorted arrays. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.
link


Input Format
First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.


Constraints
1<=t<=100 1<=n,m, nums1[i], num2[i]<=100000


Output Format
Print the maximum path Sum.


Sample Input
2
8 8
2 3 7 10 12 15 30 34
1 5 7 8 10 15 16 19
5 4
2 4 5 8 10
4 6 8 9

Sample Output
122
30
Explanation
Test Case1 Explanation :- 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> arr1(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr1[i];
		}
		vector<int> arr2(m);
		for(int i=0; i<m; i++)
		{
			cin>>arr2[i];
		}
		int sum1=0;
		int sum2=0;
		int i=0;
		int j=0;
		int finalans=0;
		while(i<n && j<m)
		{
			if(arr1[i] < arr2[j])
			{
				sum1 +=arr1[i];
				i++;
			}
			else if(arr1[i] > arr2[j])
			{
				sum2 +=arr2[j];
				j++;
			}
			else
			{
				finalans +=max(sum1,sum2)+arr1[i];
				sum1=0;
				sum2=0;
				i++;
				j++;
			}
		}
		while(i<n)
	{
		sum1 +=arr1[i];
		i++;
	}
	while(j<m)
	{
		sum2 +=arr2[j];
		j++;
	}
	finalans +=max(sum1,sum2);
	cout<<finalans<<endl;	
	}

	
	return 0;
}