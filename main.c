#include <stdio.h>

int main() {

    int firstNumber;

    printf("Podaj dlugosc boku");
    scanf(" %d", &firstNumber);

    for (int i = 0; i < firstNumber; i++) {
        printf("*");
        for (int j = 0; j < firstNumber; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


