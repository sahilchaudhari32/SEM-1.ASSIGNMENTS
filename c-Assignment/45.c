#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int row = 1; row <= n; row++){
       for(int col = 1; col <= n; col++){
        if(row == col || row + col == n + 1){
            printf("*",col);
        }
        else{
            printf(" ");
        }
       }
       printf("\n");
    }
    
    return 0;
}