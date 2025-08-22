## 목차

---

- \[Silver III\] 블로그 - 21921
    - 누적합 (Prefix Sum) 이란?
- Solution
    - \1. 슬라이딩 윈도우
    - \2. 응용
- Reference
    - Tags

---

## [\[Silver III\] 블로그 - 21921](https://www.acmicpc.net/problem/21921)

### 누적합 (Prefix Sum) 이란?

```cpp
int arr[5] = { 1, 2, 3, 4, 5 };
```

| **index**         | `0` | `1` | `2` | `3` | `4` |
|-------------------|-----|-----|-----|-----|-----|
| **Value (`arr`)** | 1   | 2   | 3   | 4   | 5   |
| **Sum (`sum`)**   | 1   | 3   | 6   | 10  | 15  |

- 예시로 $i$ 에서 $j$ 사이의 합($i \le j$)을 구한다고 가정한다면,  
  `arr[j] - arr[i - 1]`으로 표현합니다.

$$
\Large
\overset{
\text{sum}(x_{1}, x_{2})
}{
\text{arr}[x_{2}] - \text{arr}[x_{1} - 1]
}
$$

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
\overset{
    \text{비둘기}
}{
    \text{sum}[i - 1][j]
} +
\overset{
    \text{콩둘기}
}{
    \text{sum}[i][j - 1]
} -
\overset{
    \text{중복 제거}
}{
    \text{sum}[i - 1][j - 1]
}
$$

| index       | `sum[0][0]` | `sum[0][1]` | `sum[0][2]` | `sum[0][3]` |
|-------------|-------------|-------------|-------------|-------------|
| `sum[0][0]` | 1           | 3           | 6           | 10          | 
| `sum[1][0]` | 6           | 14          |             |             |
| `sum[2][0]` | 15          | 33          |             |             |
| `sum[3][0]` | 28          |             |             |             |

- `arr[1][1] ~ arr[2][2]` 범위의 값을 구한다고 가정할 때,  
  비둘기

$$
\Large
\overset{
\text{sum}(x_{1}, y_{1}, x_{2}, y_{2})
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
