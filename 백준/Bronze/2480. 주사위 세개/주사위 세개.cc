#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int r = 0;
    scanf("%d %d %d", &a, &b, &c);

    if ( ( a == b ) && ( b == c ) )
    {
        r = 10000 + ( a * 1000 );
    } 
    else if ( ( a == b ) || ( b == c ) || ( c == a ) ) 
    {
        r = ( ( a == b ) || ( c == a ) ) ?
            1000 + ( a * 100 ) :
            1000 + ( b * 100 ) ;
    }
    else 
    {
        r = ( a > b ) ?
            ( b > c ) ? c * 100 : ( ( a > c ) ? a * 100 : c * 100 ) :
            ( b > c ) ? b * 100 : c * 100 ;
    }

    printf("%d", r);

    return 0;
}