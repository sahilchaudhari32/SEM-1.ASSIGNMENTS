#include <stdio.h>

int main() {

     char row;

    scanf("%d", &row);

    for (int i = 0; i < row; i++) {

        for (int j = 0; j < row - i; j++) {
            printf("");
        }

        for (int k = 0; k <= i; k++) {
            printf("%c",'A'+k);
        }

        printf("\n");
    }

    return 0;
}