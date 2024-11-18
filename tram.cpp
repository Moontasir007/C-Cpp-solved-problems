#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,sum=0,max=0;
    while(n--)
    {
        cin>>a>>b;
        sum-=a;
        sum+=b;
        if(sum>max) max=sum;
        else max=max;
    }
    cout<<max<<endl;
}
