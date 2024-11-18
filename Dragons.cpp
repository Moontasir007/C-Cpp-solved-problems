#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int defeat=0;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(s > v[i].first)
        {
            defeat++;
            s+=v[i].second;
        }
    }
    if(defeat==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
