#include <stdio.h>

#define PRINT_PYRAMID(n) \
    for (int i = 1; i <= n; i++) { \
        for (int j = 1; j <= n - i; j++) printf(" "); \
        for (int k = 1; k <= 2 * i - 1; k++) printf("*"); \
        printf("\n"); \
    }

int main() {
    int row; 
    printf("Enter the rows : ");
    scanf("%d",&row);
    PRINT_PYRAMID(row);
    return 0;
}
