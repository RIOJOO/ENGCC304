#include <stdio.h>


int main() {
    float score;
    char grade;

    printf("Score: ");
    scanf("%f", &score);

    if (score < 50) {
        printf("My Score: F\n");
    } else if (score < 55) {
        printf("My Score: D\n");
    } else if (score < 60) {
        printf("My Score: D+\n");
    } else if (score < 65) {
        printf("My Score: C\n");
    } else if (score < 70) {
        printf("My Score: C+\n");
    } else if (score < 75) {
        printf("My Score: B\n");
    } else if (score < 80) {
        printf("My Score: B+\n");
    } else {
        printf("My Score: A\n");
    }

    return 0;
}
