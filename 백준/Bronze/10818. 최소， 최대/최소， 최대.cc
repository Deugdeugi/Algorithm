#include <cstdio>

int main()
{
    int N = 0, num = 0, max = -1000001, min = 10000001;
    scanf("%d", &N);

    while ( N-- )
    {
        scanf("%d", &num);
        if ( min > num ) min = num;
        if ( max < num ) max = num;
    }

    printf("%d %d", min, max);
    return 0;
}