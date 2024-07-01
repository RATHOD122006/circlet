#include <stdio.h>

int main() {
    int a = 5; 

    
    for (int i = 0; i < a; ++i) {
        
        for (int j = 0; j < i; ++j) {
            printf("  "); 
        }

        
        for (int k = 0; k < a - i; ++k) {
            printf("%d", k % 2);

            if (k < a - i - 1) {
                printf(" "); 
            }
        }

        printf("\n"); 
    }

    
}