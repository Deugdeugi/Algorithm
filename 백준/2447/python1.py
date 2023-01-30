# 재귀 : 큰 케이스로부터 기본 케이스까지 들어간다.
# 1. base 케이스 : 3x3
# 2. 재귀 : 가운데 부분을 비워두고 나머지 부분을 3x3, 9x9... 등 기본 모양으로 채운다.
# 3. 맨 왼쪽 3x3 부터 채우고 => 맨 왼쪽 9x9부터 채우고 => 맨 왼쪽 27x27부터 채우고... 의 반복

import sys
sys.setrecursionlimit(10**6)	# 파이썬 재귀 제한 늘리기

def paint_star(LEN):
    DIV3 = LEN//3
    if LEN == 3:
        g[1] = ['*', ' ', '*']
        g[0][:3] = g[2][:3] = ['*']*3
        return

    paint_star(DIV3)

    for i in range(0, LEN, DIV3):
        for j in range(0, LEN, DIV3):
            if i != DIV3 or j != DIV3:
                for k in range(DIV3):
                    g[i+k][j:j+DIV3] = g[k][:DIV3]

n = int(sys.stdin.readline().strip())
g = [[' ' for _ in range(n)] for _ in range(n)]
paint_star(n)

for i in range(n):
    for j in range(n):
        print(g[i][j], end='')
    print()
