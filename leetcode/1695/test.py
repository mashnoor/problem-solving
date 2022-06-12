v = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10]
all = 0
z = []
for i in v:
    all += i
    z.append(all)


print(z[4]-z[1])