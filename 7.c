#include <stdio.h>

int main() {
    int tinggi;

    printf("Masukkan Tinggi Segitiga : ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i + 1; j++){
            printf("%d", i); 
        }
        printf("\n");
    }
    return 0;
}