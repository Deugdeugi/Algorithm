#include <cstdio>

int main()
{
    int N = 0, i = 0;
    int num = 0, max = 0;
    int arr[1000] = {0, };
    int sum = 0;

    scanf("%d", &N);

    for ( i = 0 ; i < N ; i++ )
    {   
        scanf("%d", &num);
        arr[i] = num;
        if ( max < num ) max = num;
    }

    for ( i = 0 ; i < N ; i++ )
    {
        sum += ( 100 * arr[i] );
    }

    printf("%lf", (double)sum / ( max * N ) );
    return 0;
}