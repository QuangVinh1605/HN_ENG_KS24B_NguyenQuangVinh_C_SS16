#include <stdio.h>

void updateelement(int *arr, int size, int newvalue, int position) {
    
    arr[position] = newvalue;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newvalue = 99;
    int position = 2;
    updateelement(arr, size, newvalue, position);

    printf("mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

