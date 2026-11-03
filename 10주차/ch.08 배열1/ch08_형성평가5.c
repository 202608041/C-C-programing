#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;
    int max, min;

    while (count < 100) {
        scanf("%d", &arr[count]);

        if (arr[count] == 0) {
            break;
        }

        count++;
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max + min);

    return 0;
}
