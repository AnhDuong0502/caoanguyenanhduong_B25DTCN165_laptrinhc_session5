#include <stdio.h>

int main() {
    float kwh, tien_bac_thang = 0, phu_phi, tong_tien;
    int loai_ho;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &kwh);

    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loai_ho);

    
    if (kwh <= 50)
        tien_bac_thang = kwh * 1500;
    else if (kwh <= 100)
        tien_bac_thang = 50 * 1500 + (kwh - 50) * 2000;
    else if (kwh <= 200)
        tien_bac_thang = 50 * 1500 + 50 * 2000 + (kwh - 100) * 2500;
    else
        tien_bac_thang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kwh - 200) * 3000;

    
    switch (loai_ho) {
        case 1: 
            phu_phi = tien_bac_thang * 0.05;
            break;
        case 2: 
            phu_phi = tien_bac_thang * 0.10;
            break;
        case 3: 
            phu_phi = tien_bac_thang * 0.08;
            break;
        default:
            printf("Loai ho khong hop le!\n");
            return 0;
    }

    tong_tien = tien_bac_thang + phu_phi;
    printf("\nTien bac thang: %.0f VND", tien_bac_thang);
    printf("\nPhu phi: %.0f VND", phu_phi);
    printf("\n==> Tong tien dien phai tra: %.0f VND\n", tong_tien);

    return 0;
}
