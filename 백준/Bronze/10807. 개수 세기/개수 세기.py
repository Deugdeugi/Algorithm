import sys

input = sys.stdin.readline
_ = int(input())
nums = list(map(int, input().split()))
v = int(input())

print(nums.count(v))