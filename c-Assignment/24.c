#include <stdio.h>

int main() {
    int row;
    scanf("%d",&row);
    
    for (int i =1; i <= row; i++){
    
        for (int j = 1; j <= i; j++){
            printf("%d",j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    

    return 0;
}