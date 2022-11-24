x=list(map(int,range(31)))
del x[0]
for i in range(28):
    x.remove(int(input()))
for j in x:
    print(j)
