#include <bits/stdc++.h>

using i64 = long long;

void solve() {
	int n, x;
	std::cin >> n >> x;

	std::vector<std::pair<int, int>> vp(n);

	for (int i = 0; i < vp.size(); i++) {
		std::cin >> vp[i].first >> vp[i].second;
	}

	int cur = 1;
	int ans = 0;

	for (auto [l, r] : vp) {

		while (cur + x <= l) {
			cur += x;
		}

		ans += r - cur + 1;
		cur = r + 1;
	}

	std::cout << ans << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t = 1;
	// std::cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}