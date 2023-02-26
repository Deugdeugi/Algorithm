#include <cstdio>

int main()
{
    int n = 0, i = 0;
    int arr[31] = { 0, };

    for ( i = 0 ; i < 28 ; i++ )
    {   
        scanf("%d", &n);
        arr[n] = 1;
    }

    for ( i = 1 ; i <= 30 ; i++ )
    {
        if ( ! arr[i] ) printf("%d\n", i);
    }

    return 0;
}