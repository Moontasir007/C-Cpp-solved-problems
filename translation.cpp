#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,v="";
    cin>>s>>t;
    int n = s.size();
    for(int i=n-1; i>=0; i--)
    {
        v+=s[i];
    }
    if(v==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
