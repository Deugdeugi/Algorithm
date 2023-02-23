#include <cstdio>

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%c", ( ( ( a % 4 ) == 0 ) && ( ( ( a % 100 ) != 0 ) || ( ( a % 400 ) == 0 ) ) ) ? '1' : '0' );
    return 0;
}