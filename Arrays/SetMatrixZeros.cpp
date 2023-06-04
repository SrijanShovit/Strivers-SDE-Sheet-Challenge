#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	unordered_set<int> rowFlag;
	unordered_set<int> colFlag;
	// vector<vector<int>> flag(n,vector<int> (m,1));
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			if (matrix[i][j] == 0){
				rowFlag.insert(i);
				colFlag.insert(j);
			}
		}
	}

	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j){
			// if (flag[i][j]==0)	matrix[i][j] = 0;
			if (rowFlag.count(i) || colFlag.count(j)) matrix[i][j] = 0;
		}
	}
}