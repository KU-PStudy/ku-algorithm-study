#include <iostream>
using namespace std;

int main() {
	int N, In[301] = { 0 }, DP[301] = { 0 }; cin >> N;
	for (int n = 1; n <= N; n++) { cin >> In[n]; }
	for (int n = 1; n < 4; n++) {
		DP[n] = In[n];
		if (n < 2) { continue; }
		DP[n] += max(In[n - 1], In[n - 2]);
	}
	for (int n = 4; n <= N; n++) {
		DP[n] = In[n];
		DP[n] += max(DP[n - 3] + In[n - 1], DP[n - 2]);
	}
	cout << DP[N];
	return 0;
}