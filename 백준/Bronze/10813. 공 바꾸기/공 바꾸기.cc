#include <cstdio>

void swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N = 0, M = 0, i = 0;
    int arr[101] = { 0, };
    int a = 0, b = 0;

    for ( i = 1 ; i <= 100 ; i++ )
    {
        arr[i] = i;
    }

    scanf("%d %d", &N, &M);

    for ( i = 0 ; i < M ; i++ )
    {
        scanf("%d %d", &a, &b);
        swap(&arr[a], &arr[b]);
    }

    for ( i = 1 ; i <= N ; i++ )
    printf("%d ", arr[i]);

    return 0;
}