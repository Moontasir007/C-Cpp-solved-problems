#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,zero=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0) zero++;
    }
    if(zero==n) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}
