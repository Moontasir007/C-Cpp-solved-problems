#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin>>n>>m;
  int arr[m];
  for(int i = 0; i < m; i++){
    cin>>arr[i];
  }
  sort(arr, arr+m);
  int res = 1000000;
  for(int i = 0; i <= m - n; i++){
    if((arr[n + i - 1] - arr[i]) < res){
      res = (arr[i+n-1] - arr[i]);
    }
  }
  cout<<res<<endl;

}
