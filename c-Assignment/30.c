#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("%c",'A'+k-1);
        }
        for (int k = i-1; k >= 1; k--){
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--){
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("%c",'A'+k-1);
        }
        for (int k = i-1; k >= 1; k--){
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }

    return 0;
}
