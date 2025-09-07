#include <iostream>
using namespace std;

short Use[10001], Print[8];
int N, M, Min = 1e9, Max;

void print(int index, int value) {
	Print[index] = value;
	if (index + 1 == M) {
		for (int m = 0; m < M; m++) {
			cout << Print[m] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int n = Min; n <= Max; n++) {
		if (Use[n]) {
			Use[n]--;
			print(index + 1, n);
			Use[n]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int In; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		cin >> In; Use[In]++;
		Min = min(In, Min);
		Max = max(In, Max);
	}
	for (int n = Min; n <= Max; n++) {
		if (Use[n]) {
			Use[n]--;
			print(0, n);
			Use[n]++;
		}
	}
	return 0;
}