#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    printf("Введите номера трех игроков (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);
    if ((A + B + C) % 3 == 0) {
        printf("\nСчастливая тройка, cумма номеров (%d + %d + %d = %d) делится на 3 без остатка.\n", A, B, C, A + B + C);
    }
    else {
        printf("\nОбычная тройка, cумма номеров (%d + %d + %d = %d) не делится на 3 без остатка.\n", A, B, C, A + B + C);
    }
}