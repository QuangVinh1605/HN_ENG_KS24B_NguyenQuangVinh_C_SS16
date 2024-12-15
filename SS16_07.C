#include <stdio.h>

void sortArray(int *arr, int size);
int main() {
    int arr[] = {2, 3, 9, 1, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
