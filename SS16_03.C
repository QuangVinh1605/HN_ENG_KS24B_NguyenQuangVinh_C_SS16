#include <stdio.h>
int addition(int *a,int *b);
int main(){
	int number_1=16;
	int number_2=5;
	int result=addition(&number_1,&number_2);
	printf("tong cua %d va %d la %d",number_1,number_2,result);
	
	return 0; 
} 
int addition(int *a,int *b){
	return *a+*b;
} 
