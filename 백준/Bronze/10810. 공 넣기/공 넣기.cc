#include <cstdio>

int main()
{
    int N = 0, M = 0, i = 0, j = 0;
    int arr[101] = { 0, };
    int a = 0, b = 0, c = 0;

    scanf("%d %d", &N, &M);

    for ( i = 0 ; i < M ; i++ )
    {
        scanf("%d %d %d", &a, &b, &c);
        
        for ( j = a ; j <= b ; j++ )
        {
            arr[j] = c;
        }
    }

    for ( i = 1 ; i <= N ; i++ )
    printf("%d ", arr[i]);

    return 0;
}