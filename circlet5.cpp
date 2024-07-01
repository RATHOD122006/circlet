#include <stdio.h>

int main() {
    int n = 5;  
    int i, j, k, num;

   
    for (i = 1; i <= n; i++) {
        
        for (j = n; j > i; j--) {
            printf("  ");
        }
        
        
        num = n - i + 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        
        
        num -= 2;
        for (j = 1; j < i; j++) {
            printf("%d ", num--);
        }
        
        
        printf("\n");
    }

    return 0;
}
