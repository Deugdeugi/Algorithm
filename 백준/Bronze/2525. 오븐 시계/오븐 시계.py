hour, min = map(int, input().split())
requireTime = int(input())
resultMin = ( hour * 60 ) + min + requireTime

print( ( resultMin // 60 ) % 24, resultMin % 60)