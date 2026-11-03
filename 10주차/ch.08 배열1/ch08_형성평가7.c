#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;

    while (count < 100) {
        scanf("%d", &arr[count]);

        if (arr[count] == 0) {
            break;
        }

        count++;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 == 1) {
            printf("%d", arr[i] * 2);
        }
        else {
            printf("%d", arr[i] / 2);
        }

        if (i < count - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
