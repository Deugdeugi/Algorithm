// 재귀 사용하지 않고 찍기

#include <cstdio>

int star(int x, int y);

int main(void) {
    int number = 0, x = 0, y = 0;

    scanf("%d", &number);

    for (x = 0; x < number; x++) {
        for (y = 0; y < number; y++) {
            if ( star(x, y) ) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}

int star(int x, int y) {
    while (1) {
        if ( ( (x % 3) == 1 ) && ( ( y % 3 ) == 1 ) ) return 1;
        if ( x == 0 || y == 0 ) return 0;
        x = x / 3;
        y = y / 3;
    }
}