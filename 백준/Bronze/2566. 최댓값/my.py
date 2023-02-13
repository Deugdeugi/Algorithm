import sys
input = sys.stdin.readline
maxValue = -1
maxi = 0
maxj = 0

for i in range(1, 10):
    arr = list(map(int, input().split()))
    
    for j in range(1, 10):
        if arr[j - 1] > maxValue:
            maxValue = arr[j - 1]
            maxi = i
            maxj = j

print(maxValue)
print(maxi, maxj)
