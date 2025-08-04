#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n % 2 == 1) {
        for (int i = 1; i <= n; i += 2) {
            printf("%d\n", i);
        }
    } else {
        for (int i = n; i >= 0; i -= 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}