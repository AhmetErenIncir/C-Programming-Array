#include <stdio.h>

int main(){
	int array[10],sum=0;
	printf("enter 10 number\n");
	for(int i=0 ; i<10 ; i++){
		scanf("%d",&array[i]);
	}

	int *end_ptr = array+10-1;
	int *i;

	for(i=array ; i<=end_ptr ; i++){
		sum += *i;
	}
	printf("Sum of elements is %d\n",sum);
}
