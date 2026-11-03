#include <stdio.h>

int main(void) {
    double base, height;
    char cont;

    do {
        scanf("%lf %lf", &base, &height);

        printf("Triangle area = %.1f\n", base * height / 2.0);

        printf("Continue? ");
        scanf(" %c", &cont);

    } while (cont == 'Y' || cont == 'y');

    return 0;
}
