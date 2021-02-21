loc_list = []
n = int(input())
for _ in range(n):
    a, b = map(int, input().split(' '))
    loc_list.append((a, b))

result = sorted(loc_list, key=lambda x: (x[1], x[0]))
for loc in result:
    print(f"{loc[0]} {loc[1]}")
