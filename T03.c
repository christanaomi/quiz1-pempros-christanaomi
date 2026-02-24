#include <stdio.h>

int main() {
    float berat;
    float total = 0;
    float tambahan = 0;

    printf("=====================================\n");
    printf("        SISTEM LAUNDRY DEL\n");
    printf("=====================================\n");

    printf("Masukkan berat laundry (kg) : ");
    scanf("%f", &berat);

    if (berat <= 0) { 
        printf("\nInput tidak valid!\n");
    } else {

        if (berat <= 15) {
            total = berat * 7000;
        } else {
            tambahan = berat - 15;
            total = (15 * 7000) + (tambahan * 10000);
        }

        printf("\n=====================================\n");
        printf("              STRUK\n");
        printf("=====================================\n");
        printf("Berat Laundry        : %.2f kg\n", berat);

        if (berat <= 15) {
            printf("Harga per kg         : Rp 7.000\n");
        } else {
            printf("Harga 15 kg pertama  : Rp 7.000/kg\n");
            printf("Harga selebihnya     : Rp 10.000/kg\n");
        }

        printf("-------------------------------------\n");
        printf("TOTAL BAYAR          : Rp %.0f\n", total);
        printf("-------------------------------------\n");

        if (total >= 50000) {
            printf("BONUS                : FREE GOSOK\n");
        } else {
            printf("BONUS                : -\n");
        }

        printf("=====================================\n");
        printf("      TERIMA KASIH TELAH DATANG\n");
        printf("=====================================\n");
    }

    return 0;
}
