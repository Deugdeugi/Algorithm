#include <stdio.h>

int main()
{
    int n = 0, r = 0, i = 0;
    scanf("%d", &n);

    for( i = 1 ; i <= n ; i++ )
    {
        r += i;
    }

    printf("%d", r);
    return 0;
}