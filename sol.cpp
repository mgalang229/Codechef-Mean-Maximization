#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the sequence in non-decreasing order
		sort(a.begin(), a.end());
		// find the average of the sequence but don't include the last
		// element since we need to choose 2 subsets from the sequence
		// note: this will also make sure, that we don't lose the highest value
		// final answer: calculate the sum of the average and the last element
		double mean = 0;
		for (int i = 0; i < n - 1; i++) {
			mean += a[i];
		}
		mean = mean / (n - 1);
		cout << fixed << setprecision(6) << (double) mean + a[n - 1] << '\n';
	}
	return 0;
}
