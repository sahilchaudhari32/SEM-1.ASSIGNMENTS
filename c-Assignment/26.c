#include <stdio.h>

int main() {
    int row;
  
    scanf("%d", &row);

    for (int i = row; i >= 1; --i) {
    
        for (int j = row - i; j >= 1; --j) {
            printf(" ");
        }

            for (int k =  1; k <= 2 * i - 1; k++) {
            printf("*",k);
        }

        printf("\n");
    }

    return 0;
}