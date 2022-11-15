lst = sorted(list(map(int, input().split())))

if len(set(lst)) is 1:
    print(10000 + lst[0]*1000)
elif len(set(lst)) is 2:
    print(1000 + lst[1]*100)  # pick middle
else:
    print(lst[2]*100)
