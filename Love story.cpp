#include <bits/stdc++.h>
    #define ll long long int
    #define nline '\n'
    using namespace std;

    void solve()
    {
        string s;
        cin >> s;
        string cF = "codeforces";

        ll res = 0;

        for (ll i = 0; i < 10; i++)
            if (cF[i] != s[i])
                res++;

        cout << res << nline;
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll T = 1;
        cin >> T;
        while (T--)
        {
            solve();
        }
    }
