#include <stdio.h>

float sumFoo(int n) {
    float result = 0.0;
    float factorial = 1.0;
    
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        result = result + (float)(i * i) / factorial;
    }
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    
    float result = sumFoo(n);
    
    printf("Result = %.2f", result);
    
    return 0;
}
