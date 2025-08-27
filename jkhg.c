#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 60 == 0)
        printf("Divisible by 3, 4, 5");

    else if (num % 12 == 0)
        printf("Divisible by 3 and 4");

    else if (num % 3 == 0)
        printf("Divisible by 3");

    else if (num % 20 == 0)
        printf("Divisible by 4 and 5");

    else if (num % 4 == 0)
        printf("Divisible by 4");

    else if (num % 5 == 0)
        printf("Divisible by 5");

    else
        printf("Not divisible by any number");

    return 0;
}
