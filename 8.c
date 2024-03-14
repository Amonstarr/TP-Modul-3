#include <stdio.h>

int main(){
    int angka1, angka2;

    printf("Masukkan Angka 1 : ");
    scanf("%d", &angka1);

    printf("Masukkan Angka 2 : ");
    scanf("%d", &angka2);

    int fpb;
    int a = angka1, b = angka2;

    do
    {
        int sisa = a % b;
        a = b;
        b = sisa;
    } while (b != 0);

    fpb = a;

    printf("FPB dari %d dan %d adalah %d\n", angka1, angka2, fpb);
}