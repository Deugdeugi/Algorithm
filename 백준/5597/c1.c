#include<stdio.h>

int A[32];

int main(void)
{
	int i;
	while(~scanf("%d",&i)) A[i]=1;
	for(i=1;i<=30;i++) if(!A[i]) printf("%d\n",i);
	return 0;
}
