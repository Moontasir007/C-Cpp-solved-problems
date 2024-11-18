#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        double p;
        cin>>p;
        sum+=p;
    }
    double res;
    res = sum/n;
    cout<<res<<endl;
}
