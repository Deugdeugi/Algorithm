#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    int t = 0;

    scanf("%d %d %d", &a, &b, &t);
    printf("%d %d", ( a + ( ( b + t ) / 60 ) ) % 24, ( b + t ) % 60 );

    return 0;
}