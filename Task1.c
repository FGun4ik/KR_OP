#include <stdio.h>

int triangleType(int a, int b, int c) {
    if (a + b <= c || b + c <= a || c + a <= b) {
        printf("0, такого треугольника не может существовать.");
        return 0; 
    } else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
        printf("1, треугольник прямоугольный");
        return 1; 
    } else {
        printf("2, иначе");
        return 2; 
    }
}

int main() {
    int storA, storB, storC;
    
    printf("Сторона A: ");
    scanf("%d", &storA);
    printf("Сторона B: ");
    scanf("%d", &storB);
    printf("Сторона C: ");
    scanf("%d", &storC);
    
    int result = triangleType(storA, storB, storC);
    
    return result;
}
