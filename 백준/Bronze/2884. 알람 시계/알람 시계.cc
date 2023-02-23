#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    int r = 0;

    scanf("%d %d", &a, &b);
    r = ( ( a * 60 + b ) - 45 ) < 0 ? ( 24 * 60 ) - ( 45 - b ) : ( a * 60 + b ) - 45 ;
    printf("%d %d", r / 60, r % 60);

    return 0;
}