#include <bits/stdc++.h>
    #define ll long long int
    #define nline '\n'
    using namespace std;

    void solve()
    {
       string s;
       cin >> s;

        if ((s[0] == 'Y' || s[0] == 'y') and (s[1] == 'E' || s[1] == 'e') and (s[2] == 'S' || s[2] == 's'))
            cout << "YES\n";
        else
            cout << "NO\n";
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
