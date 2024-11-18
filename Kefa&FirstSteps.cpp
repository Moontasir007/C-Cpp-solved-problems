#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int arr[n+1];
  for(int i = 0; i <n; i++){
    cin>>arr[i];
  }
  arr[n] = std::numeric_limits<int>::max();
  int max= 0, count = 0;
  for(int i = 0; i < n; i++){
    count++;
    max = count > max ? count : max;
    if(arr[i] > arr[i+1]){
      count = 0;
    }
  }
  cout<<max<<endl;

}
