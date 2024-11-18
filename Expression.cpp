#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ara[]={a*b*c, a*b+c, a*(b+c), a+b*c, (a+b)*c, a+b+c};
    int mx=0;
    for(int i=0;i<6;i++)
        mx=max(mx,ara[i]);
    cout<<mx<<endl;
    return 0;
}
