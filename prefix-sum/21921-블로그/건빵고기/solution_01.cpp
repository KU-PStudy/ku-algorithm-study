#include <iostream>
using namespace std;

int Visit[250000], Total = 0, MaxTotal = 0, Count = 1;

int main() {
	ios_base::sync_with_stdio(false);
	int X, N; cin >> X >> N;
	for (int x = 0; x < X; x++) {
		cin >> Visit[x];
		if (x < N) { Total += Visit[x]; }
	}
	MaxTotal = Total;
	for (int n = N; n < X; n++) {
		Total += Visit[n] - Visit[n - N];
		if (MaxTotal < Total) {
			MaxTotal = Total; Count = 1;
		}
		else if (MaxTotal == Total) { Count++; }
	}
	if (MaxTotal != 0) {
		cout << MaxTotal << '\n' << Count;
	}
	else { cout << "SAD"; }
	return 0;
}