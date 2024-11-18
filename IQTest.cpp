#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int evan = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0) evan++;
    }
    if(evan==1){
        for(int i=0; i<n; i++)
    {
        if(a[i]%2==0) cout<<i+1<<endl;
    }
    }
    else{
        for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0) cout<<i+1<<endl;
    }
    }

}
