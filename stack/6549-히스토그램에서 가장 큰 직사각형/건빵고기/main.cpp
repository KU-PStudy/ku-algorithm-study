#include <iostream>
#include <stack>
using namespace std;
using LL = long long;

LL N, arr[100000];
stack <LL> s;

void GetMaxArea() {
	LL n = 0, index, topArea, maxArea = 0;
	while (n < N) {
		while (n < N && (s.empty() || arr[s.top()] <= arr[n])) {
			s.push(n++);
		}
		while (!s.empty() && (n == N || arr[s.top()] > arr[n])) {
			index = s.top(); s.pop();
			if (s.empty()) { topArea = arr[index] * n; }
			else {
				topArea = arr[index] * (n - s.top() - 1);
			}
			maxArea = max(topArea, maxArea);
		}
	}
	cout << maxArea << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	while (1) {
		cin >> N;
		if (N == 0) { break; }
		for (int n = 0; n < N; n++) { cin >> arr[n]; }
		GetMaxArea();
	}
	return 0;
}