#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student {
	string name;
	int day, mon, year;
};

bool cmp(const struct student& x, const struct  student& y) {
	if (x.year < y.year)
		return true;
	else if (x.year == y.year) {
		if (x.mon < y.mon)
			return true;
		else if (x.mon == y.mon) {
			if (x.day < y.day)
				return true;
		}
	}
	return false;
}

int main() {

    int n;
    vector<student> v;

    cin>>n;
	for (int i = 0; i < n; i++) {
		string x;
		int a, b, c;
		cin >> x >> a >> b >> c;
		v.push_back({ x,a,b,c });
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[n - 1].name << "\n" << v[0].name;
	return 0;
}
