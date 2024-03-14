#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_siswa;
    int i = 1;

    printf("Masukkan jumlah siswa yang ingin diinput : ");
    scanf("%d", &jumlah_siswa);
    getchar();

    while (i <= jumlah_siswa) {
        printf("\nData %d\n", i);

        char nama[30], kelas[10], jurusan[30];
        long long int nim;

        printf("Nama : ");
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0';

        printf("Kelas : ");
        fgets(kelas, sizeof(kelas), stdin);
        kelas[strcspn(kelas, "\n")] = '\0';

        printf("Jurusan : ");
        getchar();
        fgets(jurusan, sizeof(jurusan), stdin);
        jurusan[strcspn(jurusan, "\n")] = '\0';

        printf("NIM : ");
        scanf("%lld", &nim);
        getchar();

        printf("\nData %d\n", i);
        printf("Nama : %s\n", nama);
        printf("Kelas : %s\n", kelas);
        printf("Jurusan : %s\n", jurusan);
        printf("NIM : %lld", nim);

        i++;
    }
    return 0;
}
