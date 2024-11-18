#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int solve(){
    int n,sum=0;
    cin>>n;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << sum << endl;
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
}
