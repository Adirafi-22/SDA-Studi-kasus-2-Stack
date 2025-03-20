#include "stack.h"

int main() {
    Stack S;
    CreateStack(&S);
    
    int decimal;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    // Konversi desimal ke biner menggunakan stack
    int temp = decimal;
    if (temp == 0) {
        Push(&S, 0);
    } else {
        while (temp > 0) {
            Push(&S, temp % 2);
            temp /= 2;
        }
    }

    // Menampilkan hasil konversi biner
    printf("Bilangan desimal: %d\n", decimal);
    printf("Hasil konversi biner: ");
    while (!IsEmptyStack(S)) {
        printf("%d", Pop(&S));
    }
    printf("\n");

    // Membersihkan memori
    ClearStack(&S);
    printf("Memori stack telah dibersihkan.\n");

    return 0;
}

