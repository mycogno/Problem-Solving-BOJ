
def get_prime(n):
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
        if arr[i] == 1:
            result.append(i)
    return result


# 모든 소수 쌍을 시도하였더니 시간초과가 났음 O(n^2)
# 합이 n이니까 소수 i가 결정되면 나머지는 무조건 n-i인 것을 이용
# n-i가 소수인지만 보면 된다.
# 근데 그래도 안되네?
# 그래서 i가 n-i보다 커지기 전까지 경계를 잡아서
# 역순으로 n-i가 소수인지만 확인하고 바로 그 값을 리턴
# 그러니 되었다.
def find_gold_partition(arr, n):
    for i in arr:
        if i > n-i:
            find_index = arr.index(i)
            tmp = arr[:find_index]
            break
    tmp.reverse()
    for i in tmp:
        if n-i in arr:
            return (i, n-i)


t = int(input())
for _ in range(t):
    n = int(input())
    prime_list = get_prime(n)
    partition = find_gold_partition(prime_list, n)
    print(f"{partition[0]} {partition[1]}")
