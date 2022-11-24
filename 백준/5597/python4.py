import sys

a = []
for _ in range(28):
	a.append(int(sys.stdin.readline()))

for i in range(1, 31):
	if i not in a:
		print(i)
