#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
    
        printf("%d\n", n);
    } else {
        
        printf("%d\n", 2 * n);
    }

    return 0;
}
