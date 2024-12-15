#include <stdio.h>
void change(int *a,int *b);
int main (){
	int number_1=16;
	int number_2=5;
	printf("so thu nhat la:%d\n",number_1);
	printf("so thu 2 la:%d\n",number_2);
	change(&number_1, &number_2);
	printf("sau khi doi vi tri: \n");
	printf("so thu nhat la: %d\n",number_1);
	printf("so thu 2 la: %d",number_2);
	return 0; 

	 
} 
void change(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp; 
} 
