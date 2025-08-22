## 목차

---

- \[Silver III\] 블로그 - 21921
    - 누적합 (Prefix Sum) 이란?
- Solution
    1. 슬라이딩 윈도우
    2. 응용
- Reference
    - Tags

---

## [\[Silver III\] 블로그 - 21921](https://www.acmicpc.net/problem/21921)

### 누적합 (Prefix Sum) 이란?

> **Prefix sum(누적합)**은 배열의 특정 구간 합을 빠르게 계산하기 위한 알고리즘으로, 각 인덱스까지의 누적합을  
> 미리 계산하여 저장해두고, 구간 합 계산 시 저장된 값을 이용해 시간 복잡도를 $O(1)$로 단축할 수 있습니다.  
> 
> 이 방법은 동적 계획법(DP)의 형태로, 원래 $O(N^{2})$ 또는 $O(N\cdot{M})$의 시간이 걸리던  
> 구간 합 계산을 효율적으로 수행하게 해줍니다.

#### ***1차원 배열의 누적합***

```cpp
int arr[5] = { 1, 2, 3, 4, 5 };
```

$$
\Large
\text{sum}[i] =
\overset{ \color{gray} \text{(현재 위치의 값)} }{ \text{arr}[i] } +
\overset{ \color{gray} \text{(이전 누적합)} }{ \text{sum}[i - 1] }
$$

| **index**         | `0` | `1` | `2` | `3` | `4` |
|-------------------|-----|-----|-----|-----|-----|
| **Value (`arr`)** | 1   | 2   | 3   | 4   | 5   |
| **Sum (`sum`)**   | 1   | 3   | 6   | 10  | 15  |

- 특정 범위 내의 누적합을 구한다고 하면

$$
\Large
\overset{ \text{sum}(x_{1}, \ x_{2}) }{ \text{arr}[x_{2}] - \text{arr}[x_{1} - 1] }
$$

#### ***2차원 배열의 누적합***

```cpp
int arr[4][4] = {
        {  1,  2,  3,  4 },
        {  5,  6,  7,  8 },
        {  9, 10, 11, 12 },
        { 13, 14, 15, 16 }
};
```

$$
\Large
\text{sum}[i][j] =
\overset{ \color{gray} \text{(위쪽 누적합)} }{ \text{sum}[i - 1][j] } +
\overset{ \color{gray} \text{(왼쪽 누적합)} }{ \text{sum}[i][j - 1] } -
\overset{ \color{gray} \text{(중복 영역 제거)} }{ \text{sum}[i - 1][j - 1] }
$$

| index       | `sum[0][0]` | `sum[0][1]` | `sum[0][2]` | `sum[0][3]` | `sum[0][4]` |
|-------------|-------------|-------------|-------------|-------------|-------------|
| `sum[0][0]` | 0           | 0           | 0           | 0           | 0           |
| `sum[1][0]` | 0           | 1           | 3           | 6           | 10          | 
| `sum[2][0]` | 0           | 6           | 14          | 24          | 36          |
| `sum[3][0]` | 0           | 15          | 33          | 54          | 78          |
| `sum[4][0]` | 0           | 28          | 60          | 96          | 136         |

- 특정 범위 내의 누적합을 구한다고 한다면

$$
\Large
\overset{
\text{sum}(x_{1}, \ y_{1}, \ x_{2}, \ y_{2})
}{
\text{arr}[x_{2}][y_{2}] + \text{arr}[x_{1}][y_{1}] - (\text{arr}[x_{2} - 1][y_{2}] + \text{arr}[x_{2}][y_{2} - 1])
}
$$

---

## Solution

### 1. 슬라이딩 윈도우 (Sliding Window)

- 시간 복잡도: $\large O(N)$

### 2. 응용

---

## Reference

- [YouTube - Prefix Sum](https://www.youtube.com/watch?v=yuws7YK0Yng)

- [YouTube - Sliding Window](https://www.youtube.com/watch?v=y2d0VHdvfdc)

- [YouTube - Two Pointers](https://www.youtube.com/watch?v=QzZ7nmouLTI)

---

### Tags

#Prefix_Sum  
#Sliding_Window  
#Two_Pointers
