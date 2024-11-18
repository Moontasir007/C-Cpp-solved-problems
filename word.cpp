#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a;
    int l = 0, u = 0;
    cin >> a;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            l++;
        } else {
            u++;
        }
    }

    if (l >= u) {
        for (int i = 0; i < a.size(); i++) {
            a[i] = tolower(a[i]);
        }
        cout << a << endl;
    } else {
        for (int i = 0; i < a.size(); i++) {
            a[i] = toupper(a[i]);
        }
        cout << a << endl;
    }

    return 0;
}
