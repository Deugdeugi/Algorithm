#include <cstdio>

int main()
{
    int A = -1, B = -1;
    
    while (1)
    {
        scanf("%d %d", &A, &B);
        if ( A == 0 ) break;
        printf("%d\n", A + B);
    }

    return 0;
}