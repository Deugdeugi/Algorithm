// 좌표(x, y) 값을 3으로 나누어 보았을 때 
// 마지막에 1, 1이 남으면 그 부분은 공백이다.

#include <cstdio>

int blank(int x, int y)
{
    if ( ( (x % 3) == 1 ) && ( ( y % 3 ) == 1 ) )
    {
        return 1;
    }
    else if ( x == 0 || y == 0 )
    {
        return 0;
    }
    else
    {
        x = x / 3;
        y = y / 3;
        return blank(x, y);
    }
}

int main(void) {
    int number = 0, x = 0, y = 0;

    scanf("%d", &number);

    for (x = 0; x < number; x++) {
        for (y = 0; y < number; y++) {
            if ( blank(x, y) ) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
