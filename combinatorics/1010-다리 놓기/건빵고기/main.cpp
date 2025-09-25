#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, N, M, DP[31][31] = { 0 };
	for (int n = 1; n < 31; n++) {
		DP[1][n] = n; DP[n][n] = 1;
	}
	for (int n = 2; n < 31; n++) {
		for (int m = 2; m < 31; m++) {
			DP[n][m] = DP[n][m - 1] + DP[n - 1][m - 1];
		}
	}
	cin >> T;
	while (T--) {
		cin >> N >> M;
		cout << DP[N][M] << '\n';
	}
	return 0;
}