#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> pasTri;
  vector<long long int> stage;
  for (int i=0;i<n;++i){
    stage.clear();
    for (int j=0;j<=i;++j){
      if (j==0 or j==i) stage.push_back(1);
      else stage.push_back(pasTri[i-1][j-1] + pasTri[i-1][j]);
    }
    pasTri.push_back(stage);
  }
  return pasTri;
}
