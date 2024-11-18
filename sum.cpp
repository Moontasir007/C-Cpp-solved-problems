#include<bits/stdc++.h>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll                  long long

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll a, b, c; cin >> a >> b >> c;
        if((a + b == c) || (a + c == b) || (b + c == a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
