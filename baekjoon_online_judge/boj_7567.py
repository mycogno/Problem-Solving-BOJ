n = int(input())
item_list = []
result = []
for _ in range(n):
    x, y = map(int, input().split())
    item_list.append((x, y))

for x, y in item_list:
    rank = 1
    for p, q in item_list:
        if x < p and y < q:
            rank += 1
    result.append(rank)

for i in range(len(result)):
    if i != len(result)-1:
        print(result[i], end=" ")
    else:
        print(result[i])
