#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5;
    int tong_sole = 0;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    if (num1 % 2 != 0) tong_sole += num1;
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if (num2 % 2 != 0) tong_sole += num2;
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    if (num3 % 2 != 0) tong_sole += num3;
    printf("Nhap so thu tu: ");
    scanf("%d", &num4);
    if (num4 % 2 != 0) tong_sole += num4;
    printf("Nhap so thu nam: ");
    scanf("%d", &num5);
    if (num5 % 2 != 0) tong_sole += num5;
    printf("Tong cac so nguyen le la: %d\n", tong_sole);
    return 0;
}

