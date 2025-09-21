#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int odd = 1;  
    for (int row = 1; row <= n; row++) {
        for (int i = 1; i <= row; i++) {

            printf("%d ", odd);
            odd += 2;  
        }
        
        printf("\n");
    }

    return 0;
}
