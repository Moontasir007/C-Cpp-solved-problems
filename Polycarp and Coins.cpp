#include<bits/stdc++.h>
#include<iterator>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long

const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n; cin >> n;
        ll c2 = round((double)n / 3);
        ll c1 = n - (c2 * 2);
        cout << c1 << " " << c2 << endll;
    }
    return 0;
}
