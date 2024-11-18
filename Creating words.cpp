#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int solve(){
    string a,b;
    cin>>a>>b;

    swap(a[0], b[0]);
    cout<<a<<" "<<b<<endl;
}
int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
