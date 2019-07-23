#include <stdio.h>

#define SIZE 100

void delete_element(int array[] , int* size , int index) {
	int i;
	for(i=index ; i<(*size-1) ; i++){
		array[i] = array[i+1]; //bir birim sola kaydirma islemi. burada istenilen indisten baslandigi icin orasi silinir.
	} 
	(*size)--;
}

int main(){

	int array[SIZE] , i , index , array_size ;

	printf("Enter the size of elements\n");
	scanf("%d",&array_size);

	printf("Enter the elements of array\n");
	for(i=0 ; i<array_size ; i++){
		scanf("%d",&array[i]);
	}

	printf("Array : ");
	for(i=0 ; i<array_size ; i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	printf("Enter the index to delete on array\n");
	scanf("%d",&index);

	delete_element(array,&array_size,index);

	printf("After deleting operation array :");
	for(i=0 ; i<array_size ; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
