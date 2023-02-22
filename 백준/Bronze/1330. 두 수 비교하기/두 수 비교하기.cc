#include <cstdio>

int main()
{
    int A = 0, B = 0;

    scanf("%d %d", &A, &B);
    //printf("%s", ( A > B ) ? ">" : ( ( A < B ) ? "<" : "==" ));
    puts(( A > B ) ? ">" : ( ( A < B ) ? "<" : "==" ));

    return 0;
}