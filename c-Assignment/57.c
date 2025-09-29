#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int num;

            if (i <= j && i <= size - 1 - j && i <= size - 1 - i) {
                num = i + 1; 
            }
            else if (j <= i && j <= size - 1 - i && j <= size - 1 - j) {
                num = j + 1; 
            }
            else if (size - 1 - i <= j && size - 1 - i <= i && size - 1 - i <= size - 1 - j) {
                num = size - i; 
            }
            else {
                num = size - j; 
            }

            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
