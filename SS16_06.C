#include <stdio.h>
int searchElement(int *arr, int size, int value);

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 7;
    printf("cac phan tu tron mang: ");
	for (int i=0;i<size;i++){
		printf("%d ",arr[i]); 
	}
	printf("\n") ;
	printf("phan tu co gia tri la %d nam o vi tri: ",value);

    int result = searchElement(arr, size, value);

    printf("%d\n", result);

    return 0;
}
int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

