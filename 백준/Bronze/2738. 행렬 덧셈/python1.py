import sys
I = sys.stdin.readline

N,M=map(int,I().split())
A=[]
B=[]
for _ in range(N):
    A.append(list(map(int,I().split())))
for _ in range(N):
    B.append(list(map(int,I().split())))
    
for i in range(N):
    a=[A[i][j]+B[i][j] for j in range(M)]
    print(*a)