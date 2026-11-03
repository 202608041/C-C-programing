#include <stdio.h>

int main(void) {
    int arr[4][2];
    int total = 0;
    int colSum[2] = {0, 0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            colSum[j] += arr[i][j];
            total += arr[i][j];
        }
    }

    // 가로 평균
    for (int i = 0; i < 4; i++) {
        printf("%d", (arr[i][0] + arr[i][1]) / 2);

        if (i < 3) {
            printf(" ");
        }
    }
    printf("\n");

    // 세로 평균
    printf("%d %d\n", colSum[0] / 4, colSum[1] / 4);

    // 전체 평균
    printf("%d\n", total / 8);

    return 0;
}
