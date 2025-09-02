#include <stdio.h>

int main(void) {
    int start, stop;

    /* รับค่าจากผู้ใช้ */
    printf("Enter start number: ");
    if (scanf("%d", &start) != 1) return 0;
    printf("Enter stop number: ");
    if (scanf("%d", &stop) != 1) return 0;

    /* แสดงข้อความตามโจทย์ */
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("---------------\n\n");

    /* แสดงลำดับโดยใช้ while */
    printf("Sequence from start to stop: ");
    if (start <= stop) {
        int i = start;
        while (i <= stop) {
            printf("%d", i);
            if (i < stop) printf(" ");
            i++;          // เพิ่มขึ้นทีละ 1
        }
    } else {
        int i = start;
        while (i >= stop) {
            printf("%d", i);
            if (i > stop) printf(" ");
            i--;          // ลดลงทีละ 1
        }
    }

    printf("\nThank you.\n");
    return 0;
}