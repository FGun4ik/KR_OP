#include <stdio.h>

void changeMax(int arr[], int n) {
    if (n < 2) {
        return;
    }
    
    int max1 = arr[0];
    int max2 = arr[1];
    int index1 = 0;
    int index2 = 1;

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            index2 = index1;
            max1 = arr[i];
            index1 = i;
        } else if (arr[i] > max2) {
            max2 = arr[i];
            index2 = i;
        }
    }
    
    int temporaily = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temporaily;
}

int main() {
    int arr[] = {6, 8, 4, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Начальный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    changeMax(arr, n);
    
    printf("Конечный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
