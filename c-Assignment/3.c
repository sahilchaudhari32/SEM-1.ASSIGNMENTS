#include <stdio.h>

int main() {
    int row;
    scanf("%d", &row); 

    for (int i = 0; i < row; i++) {
        printf("%c", 'A' + i);  
    }

    return 0;
}
