#include <stdio.h>

void perfectNumber(int number) {
    int div, counter = 0;

    for (div = 1; div < number; div++) {
        if (number % div == 0) {
            counter += div;
        }
    }

    if (counter == number) {
        printf("Perfect Number\n");
    } else {
        printf("Not A Perfect Number\n");
    }
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    perfectNumber(number);

    return 0;
}
