#include<bits/stdc++.h>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
const long long N = 2e5 + 5, MOD = 1e9 + 7, OO = 1e18;
const double PI = acos(-1);

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
map<char, long long>mp, mk;
set<long long>st;

int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        mp.clear();
        int n, ans = 0; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            char k = s[i];
            if(mp[k] == 0){ans += 2;}
            else ans++;
            mp[k]++;
        }
        cout << ans << endll;
    }
    return 0;
}
