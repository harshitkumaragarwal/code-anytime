#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("a is the highest number");
    }
    else if (b > a && b > c) {
        printf("b is the highest number");
    }
    else if (c > a && c > b) {
        printf("c is the highest number");
    }
    else if (a == b && b == c) {
        printf("All are equal");
    }
    else {
        printf("Two numbers are equal and greatest");
    }

    return 0;
}
 