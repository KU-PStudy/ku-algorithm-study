#include <iostream>
using namespace std;

int main() {
	int N, L, R, Min = 1e9; cin >> N;
	int In[1000][3] = { 0 }, DP[1000][3] = { 0 };
	for (int n = 0; n < N; n++) {
		for (int& in : In[n]) { cin >> in; }
	}
	for (int n = 0; n < 3; n++) {
		DP[0][n] = In[0][n];
	}
	for (int n = 1; n < N; n++) {
		for (int m = 0; m < 3; m++) {
			L = m - 1 < 0 ? 2 : m - 1;
			R = m + 1 > 2 ? 0 : m + 1;
			DP[n][m] = min(DP[n - 1][L], DP[n - 1][R]) + In[n][m];
		}
	}
	for (int& dp : DP[N - 1]) { Min = min(dp, Min); }
	cout << Min;
	return 0;
}