import sys

input = sys.stdin.readline
wnum = [1, 1, 2, 2, 2, 8]
pieces = list(map(int, input().split()))

for i in range(len(pieces)):
    print(wnum[i] - pieces[i], end=' ')
