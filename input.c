#include <stdio.h>
int main() {
    int i, n, m, num1 = 0, num2 = 0;

    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("Enter the number m: ");
    scanf("%d", &m);

    for (i = 1; i <= n; i++) {
        if (i % m == 0) {
            num2 += i;  
        } else {
            num1 += i;   
        }
    }

    printf("Sum of numbers not divisible by %d = %d\n", m, num1);
    printf("Sum of numbers divisible by %d = %d\n", m, num2);

    return 0;
}
