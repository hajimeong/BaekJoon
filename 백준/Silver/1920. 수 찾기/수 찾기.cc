#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;

    vector<int> v;
    int a;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end());

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> a;
        cout << binary_search(v.begin(), v.end(), a) << "\n";
    }

    return 0;
}
