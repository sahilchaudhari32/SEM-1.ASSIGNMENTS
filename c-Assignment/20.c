#include <stdio.h>

int main() {

    int row;
    scanf("%d", &row);
    char num = 'A';

    for(int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%c",num);
            num++;
        }
        printf("\n");
        
    }

    return 0;
}