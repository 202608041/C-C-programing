#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 15; i++) {
        printf("%d", i);

        if (i < 15) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
