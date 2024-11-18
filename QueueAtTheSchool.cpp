#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;cin>>x>>y;
	string s;cin>>s;char a;
	while(y--){
        for(int i=0;i<x-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                a=s[i];
                s[i]=s[i+1];
                s[i+1]=a;
                i++;
            }
        }
	}cout<<s;
	return 0;
}
