#include <cstdio>

const int ALPHACNT = 26;

int main()
{
    char str[101];
    int alpha[26] = {-1, };
    int i = 0, j = 0;

    for ( i = 0 ; i < ALPHACNT ; i++)
    {
        alpha[i] = -1;
    }

    scanf("%s", str);

    while ( str[j] )
    {
        if ( alpha[(int)str[j] - 97] == -1 ) alpha[(int)str[j] - 97] = j;
        j++;
    }

    for ( i = 0 ; i < ALPHACNT ; i++)
    {
        printf("%d\n", alpha[i]);
    }

    return 0;
}