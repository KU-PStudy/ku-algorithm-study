// 스터디 2주차 재귀&분할정복 복슴겸 + 3주차 투포인터 설명용 문제
// Z처럼 탑다운 방식으로 접근 가능
// 가장 큰 직사각형의 포함여부로 왼쪽절반/오른쪽절반/중간경계선걸침 3가지로 분할 후
// 좌/우 재귀로 접근 + 중앙 투포인터로 탐색

// 변수 부분 더 깔끔하게 수정

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> h;

long long func(int st, int ed)
{
    if (st == ed) return h[st];

    // 1. 좌우 분할 후 재귀
    int mid = (st + ed) / 2;
    long long ans = max(func(st, mid), func((mid + 1), ed));


    // 2. 투포인터로 모든 경우 확인
    int l = mid;
    int r = mid + 1;
    
    long long height = min(h[l], h[r]);
    long long width = 2;
    ans = max(ans, height * width);

    while (st < l || r < ed)
    {
        if (r < ed && (st == l || h[l - 1] < h[r + 1])) // l을 못움직이거나, r이 더 유리하거나
        {
            r++;
            height = min(height, h[r]);
        }
        else
        {
            l--;
            height = min(height, h[l]);
        }

        width++;
        ans = max(ans, height * width);
    }

    return ans;
}

int main()
{
    while (true)
    {
        int n; cin >> n;
        if (n == 0) return 0;

        h.resize(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> h[i];

        cout << func(1, n) << '\n';
    }

    return 0;
}

