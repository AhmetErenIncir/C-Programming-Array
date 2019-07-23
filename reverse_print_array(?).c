#include <stdio.h>

void print_reverse_array(int *array , int size){
	int *end_ptr = &array[size-1]; // (array+size-1) kullanilabilirdi.
	int* i;
	// while(end_ptr >= array){
	// 	printf("%d ",*end_ptr);
	// 	end_ptr--;
	// }
	for(i=end_ptr ; i>=array ; i--){
		printf("%d ",*i);
	}
}

int main(){
	int size ,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int array[size];

	printf("Enter the elements of array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",&array[i]);
	}
	print_reverse_array(array,size);
}
