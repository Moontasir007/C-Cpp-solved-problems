#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n + 1];
	int p[n + 1];
	for(int i = 1; i <= n; i++){
		cin>>a[i];
	}
	for(int i = 1; i <= n; i++){
		p[a[i]] = i;
	}
	for(int i = 1; i<=n; i++){
		cout<<p[i]<<" ";
	}
}
