#include<bits/stdc++.h>
#define l long
#define ll long long
#define menna_haleem ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
using namespace std;
int main()
{
	menna_haleem
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
