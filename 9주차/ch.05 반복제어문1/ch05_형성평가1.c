#include <stdio.h>

int main(void) {
    int num;
    int i;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        printf("%d", i);

        if (i < num) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
