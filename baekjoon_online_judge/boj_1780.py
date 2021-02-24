num_m1 = 0
num_0 = 0
num_p1 = 0
arr = []
n = int(input())
for _ in range(n):
    arr.append(list(map(int, input().split())))


def paper(row, column, k):
    global num_m1
    global num_0
    global num_p1
    count_m1 = 0
    count_0 = 0
    count_p1 = 0
    for i in range(row, row+k):
        for j in range(column, column+k):
            if arr[i][j] == -1:
                count_m1 += 1
            if arr[i][j] == 0:
                count_0 += 1
            if arr[i][j] == 1:
                count_p1 += 1
    if count_m1 == k*k:
        num_m1 += 1
    elif count_0 == k*k:
        num_0 += 1
    elif count_p1 == k*k:
        num_p1 += 1
    else:
        paper(row, column, k//3)
        paper(row, column + k//3, k//3)
        paper(row, column + k//3 + k//3, k//3)
        paper(row + k//3, column, k//3)
        paper(row + k//3, column + k//3, k//3)
        paper(row + k//3, column + k//3 + k//3, k//3)
        paper(row + k//3 + k//3, column, k//3)
        paper(row + k//3 + k//3, column + k//3, k//3)
        paper(row + k//3 + k//3, column + k//3 + k//3, k//3)


paper(0, 0, n)
print(f"{num_m1}\n{num_0}\n{num_p1}")
