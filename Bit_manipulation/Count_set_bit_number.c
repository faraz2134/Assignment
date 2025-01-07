#include <stdio.h>

void countBits(int n, int res[]) {
    for (int j = 0; j <= n; j++) {
        res[j] = res[j >> 1] + (j & 1);}
}
int main() {
    int n = 5;
    int res[n + 1]; 
    
    countBits(n, res);

    printf("Result: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
   return 0;}
