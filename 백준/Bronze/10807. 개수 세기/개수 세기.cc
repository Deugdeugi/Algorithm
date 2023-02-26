#include <cstdio>

int main()
{
    int N = 0, i = 0, num = 0, v = 0;
    int arr[201] = { 0, };
    
    scanf("%d", &N);

    for ( i = 0 ; i < N ; i++ )
    {
        scanf("%d", &num);
        arr[num + 100] += 1;
    }

    scanf("%d", &v);
    printf("%d", arr[v + 100]);

    return 0;
}