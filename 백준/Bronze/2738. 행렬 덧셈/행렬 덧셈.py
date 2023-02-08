N, M = map(int, input().split())
arr = [[0 for y in range(M)] for x in range(N)]

for i in range(2):
    for x in range(N):
        atom = list(map(int, input().split()))
        
        for y in range(M):
            arr[x][y] = arr[x][y] + atom[y]
            if i == 1:
                print(arr[x][y], end=' ')
        if i == 1:
            print('')