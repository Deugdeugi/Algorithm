#include <cstdio>

int main()
{
    int a = 0, b = 0;
    int c = 0, d = 0, e = 0, f = 0;

    scanf("%d %d", &a, &b);

    c = a * ( b % 10 );
    d = a * ( ( b % 100 ) / 10 );
    e = a * ( b / 100 );
    f = c + ( 10 * d ) + ( 100 * e );

    printf("%d\n%d\n%d\n%d", c, d, e, f );

    return 0;
}