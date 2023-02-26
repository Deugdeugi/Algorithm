#include <cstdio>

int main()
{
    int N = 0, X = 0, A = 0;
    scanf("%d %d", &N, &X);

    while ( N > 0 )
    {
        scanf("%d", &A);
        if ( A < X )
        {
            printf("%d ", A);
        }
        N--;
    }
    return 0;
}