#include <cstdio>
#include <cstring>

int main()
{
    int T = 0;
    char str[1001];
    scanf("%d", &T);

    while ( T > 0 )
    {
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
        T--;
    }

    return 0;
}