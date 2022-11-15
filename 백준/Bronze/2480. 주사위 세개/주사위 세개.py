import sys

input = sys.stdin.readline
a, b, c = map(int, input().split())
equal = 0
maxnum = 0

if a == b:
    if b == c:
        print(a * 1000 + 10000)
    else:
        print(a * 100 + 1000)
else:
    if b == c:
        print(b * 100 + 1000)
    else:
        if a == c:
          print(a * 100 + 1000)
        else:
            print(max(a, b, c) * 100) 