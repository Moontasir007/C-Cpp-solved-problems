#include <set>
#include <utility>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        int max_dup=1,temp=0;
        if(n==1) cout<<n<<endl;
        for(int i=0; i<k; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<temp<<endl;
    }
}
