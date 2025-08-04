#include <stdio.h>

int main(){
    int empID;
    float hoursWorked, ratePerHour, totalIncome;

    printf("employee:");
    scanf("%d", &empID);

    printf("hoursWorked:");
    scanf("%f", &hoursWorked);

    printf("ratePerHour: ");
    scanf("%f", &ratePerHour);

    totalIncome = hoursWorked * ratePerHour;

    printf("\n employee: %d\n", empID);
    printf("totalIncome: %.2f bath\n", totalIncome);

    return 0;
}
