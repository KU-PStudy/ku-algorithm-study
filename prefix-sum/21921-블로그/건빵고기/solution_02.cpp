#include <iostream>
#include <queue>
using namespace std;

int Visit, Total, MaxTotal, Count = 1;
queue<int> Q;

int main() {
	ios_base::sync_with_stdio(false);
	int X, N; cin >> X >> N;
	for (int n = 0; n < X; n++) {
		cin >> Visit;
		if (n < X - N) { Q.push(Visit); }
		if (n < N) {
			Total += Visit;
			MaxTotal += Visit;
			continue;
		}
		Total += Visit - Q.front(); Q.pop();
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