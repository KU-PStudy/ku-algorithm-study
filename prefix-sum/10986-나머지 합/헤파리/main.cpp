#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> s(n + 1, 0);
    vector<long long> cnt(m + 1, 0);
    for (int i = 1; i <= n; i++) 
    {
        int x; cin >> x;
        s[i] = s[i - 1] + x;
        cnt[s[i] % m]++; // 같은 나머지 카운팅
    }

    long long ans = cnt[0]; // 자기 자신이 이미 나누어지는 경우 (길이 1짜리 구간합)

    for (int i = 0; i < m; i++)
        ans += cnt[i] * (cnt[i] - 1) / 2; // 같은 나머지끼리 구간합 맞추기 (2개씩)

    cout << ans;

    return 0;
}