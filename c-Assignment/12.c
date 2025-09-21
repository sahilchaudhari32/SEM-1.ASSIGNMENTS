#include <stdio.h>
int main() {

     char row;

    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <= row - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%c",'A'+k-1);
        }

        printf("\n");
    }

    return 0;
}