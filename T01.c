#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    char nama_menu[20][50];
    int harga_menu[20];
    int porsi_menu[20];
    int total_menu[20];

    int i = 0;
    int total_semua = 0;
    float diskon = 0, total_bayar;

    printf("Masukkan kode dan porsi (ketik END untuk selesai)\n");

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0)
            break;

        scanf("%d", &porsi_menu[i]);

        // Tentukan nama & harga berdasarkan kode
        if (strcmp(kode, "NGS") == 0) {
            strcpy(nama_menu[i], "Nasi Goreng");
            harga_menu[i] = 15000;
        }
        else if (strcmp(kode, "AP") == 0) {
            strcpy(nama_menu[i], "Ayam Penyet");
            harga_menu[i] = 20000;
        }
        else if (strcmp(kode, "SA") == 0) {
            strcpy(nama_menu[i], "Sate Ayam");
            harga_menu[i] = 25000;
        }
        else if (strcmp(kode, "BU") == 0) {
            strcpy(nama_menu[i], "Bakso Urat");
            harga_menu[i] = 18000;
        }
        else if (strcmp(kode, "MAP") == 0) {
            strcpy(nama_menu[i], "Mie Ayam");
            harga_menu[i] = 15000;
        }
        else if (strcmp(kode, "GG") == 0) {
            strcpy(nama_menu[i], "Gado-Gado");
            harga_menu[i] = 15000;
        }
        else if (strcmp(kode, "SAM") == 0) {
            strcpy(nama_menu[i], "Soto Ayam");
            harga_menu[i] = 17000;
        }
        else if (strcmp(kode, "RD") == 0) {
            strcpy(nama_menu[i], "Rendang");
            harga_menu[i] = 25000;
        }
        else if (strcmp(kode, "IB") == 0) {
            strcpy(nama_menu[i], "Ikan Bakar");
            harga_menu[i] = 35000;
        }
        else if (strcmp(kode, "NUK") == 0) {
            strcpy(nama_menu[i], "Nasi Uduk");
            harga_menu[i] = 20000;
        }
        else {
            printf("Kode tidak valid!\n");
            continue;
        }

        total_menu[i] = harga_menu[i] * porsi_menu[i];
        total_semua += total_menu[i];

        i++;
    }

    // Hitung diskon bertingkat
    if (total_semua >= 500000)
        diskon = 0.25;
    else if (total_semua >= 400000)
        diskon = 0.20;
    else if (total_semua >= 300000)
        diskon = 0.15;
    else if (total_semua >= 200000)
        diskon = 0.10;
    else if (total_semua >= 100000)
        diskon = 0.05;
    else
        diskon = 0;

    total_bayar = total_semua - (total_semua * diskon);

    // OUTPUT TABEL
    printf("\nMenu                 Porsi     Harga     Total\n");
    printf("=========================================================\n");

    for (int j = 0; j < i; j++) {
        printf("%-20s %-8d %-9d %-9d\n",
               nama_menu[j],
               porsi_menu[j],
               harga_menu[j],
               total_menu[j]);
    }

    printf("=========================================================\n");
    printf("Total Pembayaran                           %.0f\n", total_bayar);
    printf("Diskon : %.0f%%\n", diskon * 100);

    return 0;
}
