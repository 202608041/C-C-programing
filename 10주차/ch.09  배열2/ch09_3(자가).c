#include <stdio.h>

int main(void) {
    int a = 100;
    int b;

    scanf("%d", &b);

    printf("%d %d", a, b);

    while (1) {
        int c = a - b;
        printf(" %d", c);

        if (c < 0) {
            break;
        }

        a = b;
        b = c;
    }

    return 0;
}
