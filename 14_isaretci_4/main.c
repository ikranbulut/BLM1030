#include <stdio.h>
/* fonksiyon deklarasyonu */
double ortalama(int *p, int n);
int main() {
    int dizi[5] = {10, 2, 3, 17, 50};
    double ort;
    /* pointera deger olarak diziyi atiyoruz */
    ort = ortalama(dizi, 5);
    /* dˆnd¸r¸len deger (return)  */
    printf("ortalama deger %f\n", ort);
    // yeni degeri yazdirma
    return 0;
}
double ortalama(int *p, int n) {
    int i, toplam = 0;
    for (i = 0; i < n; ++i) {
        toplam += p[i];
    }
    return toplam / n;
}