# 목차

---

- [\[Silver II\] N과 M (9) - 15663](#silver-ii-n과-m--9-)
    - [재귀 (`Recursion`) 이란?](#재귀-recursion-이란)
        - [팩토리얼 예제](#팩토리얼-예제)
        - [피보나치 수열 예제](#피보나치-수열-예제)
- [Solution](#solution)
    - [재귀](#재귀)
- [Reference](#reference)
    - [Tags](#tags)

---

# [\[Silver II\] N과 M (9)](https://www.acmicpc.net/problem/15663)

## 재귀 (`Recursion`) 이란?

> 설명 추가 예정...

---

## ***팩토리얼 예제***

```cpp
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    int N; cin >> N;
    cout << factorial(N) << endl;
    return 0;
}
```

```py
import sys
input = sys.stdin.readline         # 빠른 입력
write = sys.stdout.write           # 빠른 출력

def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)

N = int(input())
write(str(factorial(N)) + "\n")    # 반드시 문자열 형식으로만 출력 가능
```

---

## ***피보나치 수열 예제***

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    int N; cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}
```

```py
import sys
input = sys.stdin.readline         # 빠른 입력
write = sys.stdout.write           # 빠른 출력

def fibonacci(n):
    if n == 1 or n == 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

N = int(input())
write(str(fibonacci(N)) + "\n")    # 반드시 문자열 형식으로만 출력 가능
```

---

# Solution

## 재귀

```cpp
#include <iostream>
using namespace std;

int main() {
    
    return 0;
}
```

---

# Reference

- [YouTube - 재귀 함수 알고리즘 설명](https://www.youtube.com/watch?v=dtJiHp_uQWU)

- [YouTube - 재귀 설계 시, 유의사항](https://www.youtube.com/watch?v=LkHWorICuHY)

---

## Tags

#Recursion  
#DFS_(Depth_First_Search)  
#Backtracking  

---

# ***[Back to top](#top)***
