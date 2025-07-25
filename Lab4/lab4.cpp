#include <stdio.h>

int main(){
    int empID;
    float hoursWorked, ratePerHour, totalIncome;

    printf("เลขประจำตัวพนักงาน");
    scanf("%d", &empID);

    printf("ใส่จำนวนชั่วโมง");
    scanf("%f", &hoursWorked);

    printf("ใส่รายได้ต่อชั่วโมง: ");
    scanf("%f", &ratePerHour);

    totalIncome = hoursWorked * ratePerHour;

    printf("\nเลขประจำตัวพนักงาน: %d\n", empID);
    printf("รายได้ทั้งหมด: %.2f บาท\n", totalIncome);

    return 0;
}
