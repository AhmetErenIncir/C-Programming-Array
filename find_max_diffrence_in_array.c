#include "stdio.h"

void find_min_max(int array[], int size, int *min, int *max){
	int i;
	*min = array[0];
	*max = array[0];
	for(i=1 ; i<size ; i++){
		if(*max<array[i]){
			*max = array[i];
		}
		if(*min>array[i]){
			*min = array[i];
		}
	}
}

int main(){
	int size , i ,min ,max;

	printf("Enter the size of array\n");
	scanf("%d",&size );
	int array[size];

	printf("Enter elements of array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",&array[i]);
	}
	find_min_max(array,size,&min,&max);

	printf("Result : %d\n",(max-min));

}
