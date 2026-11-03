#include <stdio.h>

int main(void) {
    int num[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d", num[i]);

        if (i < 4) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
