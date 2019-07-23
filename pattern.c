#include <stdio.h>


int main(int argc, char const *argv[]) {

	int i,j,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int array[size];

	printf("Enter the elements of array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",&array[i]);
	}

	for(i=0 ; i<size ; i++){
		for(j=0 ; j<=i ; j++){
			printf("%d ",array[j]);
		}
		printf("\n");
	}



	return 0;
}
