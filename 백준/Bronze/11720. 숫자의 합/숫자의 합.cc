#include <cstdio>

int main()
{
    int N = 0, i = 0, sum = 0;
    char str[101];
    scanf("%d %s", &N, str);

    while (str[i])
    {
        sum += (int)str[i] - 48;
        i++;
    }
    printf("%d", sum);

    return 0;
}