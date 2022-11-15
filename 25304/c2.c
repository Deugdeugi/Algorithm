#include <stdio.h>
int main(){int x,n,a,b;scanf("%d\n%d",&x,&n);for(;n>0;n--){scanf("%d %d",&a,&b);x-=a*b;}printf(x==0?"Yes":"No");}
