#include <cstdio>

int main()
{
    int num = 0, i = 0, N = 0, M = 0, a = 0, b = 0;
    int arr[101] = {0, };
    int temp = 0;

    for ( i = 1 ; i <= 100; i++ ) 
    {
        arr[i] = i;
    }

    scanf("%d %d", &N, &M);

    while ( M-- )
    {   
        scanf("%d %d", &a, &b);
        
        for ( i = 0 ; i < ( b - a + 1 ) / 2 ; i++ )
        {
            temp = arr[a + i];
            arr[a + i] = arr[b - i];
            arr[b - i] = temp;
        }
    }

    for ( i = 1 ; i <= N ; i++ )
    {
        printf("%d ", arr[i]);
    }

    return 0;
}