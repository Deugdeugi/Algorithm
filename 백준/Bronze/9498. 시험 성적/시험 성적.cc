#include <cstdio>

int main()
{
    int a = 0;

    scanf("%d", &a);
    puts( ( a >= 60 ) ? 
            ( a >= 70 ) ? 
            ( a >= 80 ) ?
            ( a >= 90 ) ? "A" : "B" : "C" : "D" : "F" );

    return 0;
}