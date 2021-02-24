white = 0
blue = 0
arr = []
n = int(input())
for _ in range(n):
    arr.append(list(map(int, input().split())))


def paper(row, column, k):
    global white
    global blue
    count = 0
    for i in range(row, row+k):
        for j in range(column, column+k):
            if arr[i][j] == 1:
                count += 1
    if count == 0:
        white += 1
    elif count == k*k:
        blue += 1
    else:
        paper(row, column, k//2)
        paper(row, column + k//2, k//2)
        paper(row + k//2, column, k//2)
        paper(row + k//2, column + k//2, k//2)


paper(0, 0, n)
print(f"{white}\n{blue}")
