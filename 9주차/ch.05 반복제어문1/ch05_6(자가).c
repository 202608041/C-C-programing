#include <stdio.h>

int main(void) {
    int num;

    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");
        scanf("%d", &num);

        if (num == 1) {
            printf("\nSeoul\n\n");
        } else if (num == 2) {
            printf("\nWashington\n\n");
        } else if (num == 3) {
            printf("\nTokyo\n\n");
        } else if (num == 4) {
            printf("\nBeijing\n\n");
        } else {
            printf("\nnone\n");
            break;
        }
    }

    return 0;
