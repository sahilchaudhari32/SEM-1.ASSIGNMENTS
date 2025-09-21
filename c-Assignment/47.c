#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int even = 2;  
    for (int row = 1; row <= n; row++) {
        for (int i = 1; i <= row; i++) {

            printf("%d ", even);
            even += 2;  
        }
        
        printf("\n");
    }

    return 0;
}
