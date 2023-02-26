#include <cstdio>

int main()
{
    int num = 0, i = 0, r = 0;
    char arr[42] = { 0, };

    for ( i = 0 ; i < 10 ; i++ )
    {   
        scanf("%d", &num);
        if ( arr[num % 42] == 0 )
        {
            arr[num % 42] = 1;
            r++;
        }
    }

    printf("%d", r);

    return 0;
}