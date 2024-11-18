#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tc; cin>>tc;
    for(int t=1; t<=tc; t++){

        int n; cin>>n;
        int odd = 0;

        for(int i=1; i<=2*n; i++){
            int in; cin>>in;
            if(in % 2 != 0){
                odd++;
            }
        }
        if(odd == n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
