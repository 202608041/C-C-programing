#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    if (num >= 90) {
        printf("Excellent\n");
    } else if (num >= 80) {
        printf("Good\n");
    } else if (num >= 70) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
