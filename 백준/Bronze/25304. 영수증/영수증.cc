#include <cstdio>

int main()
{
    int X = 0, N = 0, r = 0, i = 0;
    scanf("%d %d", &X, &N);

    for( i = 0 ; i < N ; i++ )
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        r += ( a * b );
    }

    puts( ( X == r ) ? "Yes" : "No" );
    return 0;
}