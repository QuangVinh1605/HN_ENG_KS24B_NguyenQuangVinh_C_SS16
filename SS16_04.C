#include <stdio.h>
void printfArr(int *arr,int size);
int main (){
	int arr[5]={1,2,3,4,5};
	int size=5;
	printfArr(arr, size);
	return 0;
}
void printfArr(int *arr,int size){
	for (int i=0;i<size;i++){
		printf("%d \t",*(arr+i));
		
	}
}
