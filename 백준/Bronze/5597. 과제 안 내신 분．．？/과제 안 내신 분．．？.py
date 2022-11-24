import sys

input = sys.stdin.readline
studentArr = [i for i in range(0, 31)]

for j in range(28):
    n = int(input())
    studentArr[n] -= n
    
noSubmitArr = [k for k in studentArr if k != 0]

for m in noSubmitArr:
    print(m)