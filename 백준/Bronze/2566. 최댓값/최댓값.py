L=*map(int,open(0).read().split()),
a=L.index(M:=max(L))
print(M,a//9+1,a%9+1)