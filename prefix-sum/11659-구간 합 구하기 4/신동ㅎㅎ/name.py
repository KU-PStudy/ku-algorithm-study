import sys
input = sys.stdin.readline

N, M = map(int, input().split())
numbers = list(map(int, input().split()))
sum_list = [0] * (N+1)
for i in range(N):
    sum_list[i+1] = sum_list[i] + numbers[i]

for _ in range(M):
    i, j = map(int, input().split())
    print(sum_list[j]-sum_list[i-1])
print(sum_list)