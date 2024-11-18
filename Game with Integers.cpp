#include<bits/stdc++.h>
using namespace std;

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));


void solve()
{
    int n;
    cin>>n;
    if(n%3)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}
