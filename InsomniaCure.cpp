#include <bits/stdc++.h>
using namespace std;


int main (void)
{
    int i,k,l,m,n,d,c;

    while (cin >> k >> l >> m >> n >> d)
    {
        c = 0;

        if (k == 1 || l == 1 || m == 1 || n == 1)
            c = d;
        else
        {
            for (i=1; i<=d; i++)
                if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                    c++;
        }

        cout << c << endl;
    }

    return 0;
}
