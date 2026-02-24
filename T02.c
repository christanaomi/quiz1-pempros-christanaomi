#include <stdio.h>

int main() {
    int N = 4;
    int nilai[4] = {75, 65, 80, 70};
    int kelompok;
    int total = 0;
    int anggota_per_kelompok = 2;

    printf("Masukkan kode kelompok (1 atau 2): ");
    scanf("%d", &kelompok);

    // Menentukan index awal dan akhir kelompok
    int awal = (kelompok - 1) * anggota_per_kelompok;
    int akhir = awal + anggota_per_kelompok;

    // Menjumlahkan nilai sesuai kelompok
    for (int i = awal; i < akhir; i++) {
        total += nilai[i];
    }

    printf("Total nilai kelompok %d adalah: %d\n", kelompok, total);

    return 0;
}
