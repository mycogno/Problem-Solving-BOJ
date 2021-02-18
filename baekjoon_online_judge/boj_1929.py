m, n = map(int, input().split())

arr = [0, 0]
for _ in range(2, n+1):
    arr.append(1)

idx = 2
while idx * idx <= n:
    if arr[idx] == 1:
        for j in range(idx*idx, n+1, idx):
            arr[j] = 0
    idx += 1

result = []
for i in range(m, n+1):
    if arr[i] == 1:
        print(i)
