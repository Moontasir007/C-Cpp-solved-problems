#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	string s;
	cin >> s;
	int cntA = 0;
	for (int i = 0; i < 5; i++) {
		cntA += (s[i] == 'A');
	}
	cout << (cntA > 5 - cntA ? "A" : "B") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
