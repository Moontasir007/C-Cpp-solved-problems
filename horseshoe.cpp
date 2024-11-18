#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int i;
    for(i=0;i<4;i++)
    cin>>a[i];
    int c=0;
    sort(a,a+4);
    for(i=0;i<3;i++)
    {
        if(a[i]==a[i+1])
        c++;
    }
    cout<<c;
}
