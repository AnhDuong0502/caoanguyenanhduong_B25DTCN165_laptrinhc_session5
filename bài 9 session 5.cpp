#include <stdio.h>

int main() {
    float a, luong, phu_cap; // h? s? luong và luong là float
    int day, chuc_vu;

    printf("He so luong: ");
    scanf("%f", &a);

    printf("So ngay di lam: ");
    scanf("%d", &day);

    printf("Nhap chuc vu (1.Nhan vien  2.To truong  3.Quan ly): ");
    scanf("%d", &chuc_vu);

    switch (chuc_vu) {
        case 1: 
            if (day > 26)
                luong = (day * 160000 * a) + 500000 + ((day - 26) * 200000);
            else
                luong = (day * 160000 * a) + 500000;
            break;

        case 2:
            if (day > 26)
                luong = (day * 160000 * a) + 1000000 + ((day - 26) * 200000);
            else
                luong = (day * 160000 * a) + 1000000;
            break;

        case 3: 
            if (day > 26)
                luong = (day * 160000 * a) + 2000000 + ((day - 26) * 200000);
            else
                luong = (day * 160000 * a) + 2000000;
            break;
        default:
            printf("Loi dinh dang chuc vu!\n");
            return 0;
    }
    printf("Luong thang = %.0f\n", luong);
    return 0;
}
