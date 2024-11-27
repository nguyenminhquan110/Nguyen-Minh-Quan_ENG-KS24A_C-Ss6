#include <stdio.h>
int main() {
    int num, tong_sochan = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            tong_sochan += num;
        }
    }
    printf("Tong cac so nguyen chan la: %d\n", tong_sochan);
    return 0;
}

