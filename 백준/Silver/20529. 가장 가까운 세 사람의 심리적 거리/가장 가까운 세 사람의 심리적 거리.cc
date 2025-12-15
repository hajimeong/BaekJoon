#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dist(string a, string b, string c) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		cnt += (a[i] != b[i]) + (b[i] != c[i]) + (a[i] != c[i]);
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;

	for (int tc = 0; tc < t; tc++) {
		int n;
		cin >> n;

		vector<string> v(n);
		for (auto& i : v) {
			cin >> i;
		}

		if (n >= 33) {
			cout << 0 << '\n';
			continue;
		}

		int ans = 100;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					ans = min(ans, dist(v[i], v[j], v[k]));
				}
			}
		}

		cout << ans << '\n';
	}
}