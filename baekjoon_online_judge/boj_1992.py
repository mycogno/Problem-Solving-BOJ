arr = []
n = int(input())
for _ in range(n):
    s = input()
    arr.append([int(i) for i in s])


def quadtree(row, column, k):
    count = 0
    for i in range(row, row+k):
        for j in range(column, column+k):
            if arr[i][j] == 1:
                count += 1
    if count == 0:
        print(0, end="")
    elif count == k*k:
        print(1, end="")
    else:
        print("(", end="")
        quadtree(row, column, k//2)
        quadtree(row, column + k//2, k//2)
        quadtree(row + k//2, column, k//2)
        quadtree(row + k//2, column + k//2, k//2)
        print(")", end="")


quadtree(0, 0, n)
print("\n")
