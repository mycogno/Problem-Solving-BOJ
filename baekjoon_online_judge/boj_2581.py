m = int(input())
n = int(input())

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
for i in range(len(arr)):
    if arr[i] == 1 and i >= m and i <= n:
        result.append(i)

if len(result) == 0:
    print(-1)
else:
    print(sum(result))
    print(result[0])
