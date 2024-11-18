#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    string s1 = v[0],s2;
    int countA = 0, countB;
    for(int i=0; i<n; i++)
    {
        if(v[i]==s1) countA++;
        else s2 = v[i];
    }
    countB = n - countA;
    if(countA > countB) cout<<s1<<endl;
    else cout<<s2<<endl;


}
