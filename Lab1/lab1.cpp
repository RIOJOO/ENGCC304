#include <stdio.h>  // แก้จาก <stduio.h> เป็น <stdio.h>

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");  // เพิ่ม ; ต่อท้าย
    scanf("%s", Name);            // เพิ่ม ; ต่อท้าย

    printf("Enter your age: ");
    scanf("%d", &Age);            // เพิ่ม & หน้า Age

    printf("- - - - - -\n");      // แก้จาก print เป็น printf

    printf("Hello %s\n", Name);   // แทน ___ ด้วย Name
    printf("Age = %d\n", Age);    // แทน ___ ด้วย Age

    return 0;
}
