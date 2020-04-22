#include <stdio.h>

int main() {
    char c_dizi1[9] = {'K', 'a', 'r', 'a', 'k', 't', 'e', 'r', '\0'};
    char c_dizi2[9] = "Karakter";
    char c_dizi3[2][20];
    char c_dizi4[] = "Diziler";

    int i_dizi1[10];
    int i_dizi2[2][3][4];
    int i_dizi3[] = {1, 2, 3, 4, 5, 6};

    int i1, i2, i3;


    for (int i1 = 0; i1 < 10; ++i1) {
        i_dizi1[i1] = i1 * i1;
        printf("%d\n", i_dizi1[i1]);
    }


    return 0;
}