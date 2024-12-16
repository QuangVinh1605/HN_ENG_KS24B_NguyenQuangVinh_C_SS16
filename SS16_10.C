#include <stdio.h>
void insertElement(int *arr, int *size, int newValue, int position);

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int newValue = 10;
    int position = 2;

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &size, newValue, position);

    printf("Mang sau khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void insertElement(int *arr, int *size, int newValue, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = newValue;
    (*size)++;
}


