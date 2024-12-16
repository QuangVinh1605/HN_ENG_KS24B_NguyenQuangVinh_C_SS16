#include<stdio.h>
void erase(int *arr,int size,int index);
int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	int index;
	printf("nhap vi tri ban muon xoa: ");
	scanf("%d",&index);
	erase(arr,&size, index);
	printf("mang sau khi xoa: \n");
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
		
	}
	return 0;
}
void erase(int *arr,int size,int index){
	for (int i=0;i<size;i++){
		arr[i]=arr[i+1];
		
	}
	size--;
	
} 
