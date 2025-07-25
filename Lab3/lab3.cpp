#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int num) {
    if (num < 2)
        return 0;
        
    double limit = sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%2d ", arr[i]);
        else
            printf(" # ");
    }
    printf("\n");

    return 0;
}
