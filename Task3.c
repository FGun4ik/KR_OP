#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;
    
    printf("Последовательность чисел:");
    
    while (1) {
        scanf("%d", &number);
        
        if (number == 0) {
            break;
        }
        
        if (number % 2 == 0) {
            sum += number;
            count++;
        }
    }
    
    if (count > 0) {
        float average = (float)sum / count;
        printf("%.1f", average);
    } else {
        printf("0");
    }
    
    return 0;
}
