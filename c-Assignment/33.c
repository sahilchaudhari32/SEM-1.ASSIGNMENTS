#include <stdio.h>

int main() {
    int row;
    scanf("%d", &row);

    for (int i = row; i >= 1; i--) {
        for (int j = i; j >= 1; --j) {
            if (i == row || j == 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
