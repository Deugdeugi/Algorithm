#include <cstdio>
#include <memory.h>

int blank(int x, int y)
{

    if ( ( (x % 3) == 1 ) && ( ( y % 3 ) == 1 ) )
    {
        return 1;
    }
    else if ( x == 0 || y == 0 )
    {
        return 0;
    }
    else
    {
        x = x / 3;
        y = y / 3;
        return blank(x, y);
    }
}

int main(void) {
    int arr[100][100];
    memset(arr, 0, sizeof(arr));
    int N = 0, i = 0;
    int area = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        int a = 0, b = 0;
        int j = 0, k = 0;

        scanf("%d %d", &a, &b);

        for ( j = a ; j < a + 10 ; j++ )
        {
            for ( k = b ; k < b + 10 ; k++ )
            {
                if ( arr[j][k] == 0 )
                {
                    arr[j][k] = 1;
                    area++;
                }
            }
        }
    }

    printf("%d\n", area);

    return 0;
}