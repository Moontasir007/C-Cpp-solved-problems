#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int lastDigit,count=0;
    while(n!=0)
    {
        lastDigit = n%10;
        n/=10;
        if(lastDigit == 4 || lastDigit == 7) count++;
    }
    if(count == 4 || count == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
