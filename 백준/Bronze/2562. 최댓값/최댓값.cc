#include <cstdio>

int main()
{
    int num = 0, max = 0, index = -1, i = 0;


    for ( i = 1 ; i <= 9 ; i++ )
    {
        scanf("%d", &num);
        if ( max < num ) 
        {
            max = num;
            index = i;
        }
    }

    printf("%d\n%d", max, index);
    return 0;
}