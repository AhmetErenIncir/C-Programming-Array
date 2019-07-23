#include <stdio.h>

int main(){

	int n,i,shift,temp;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	int array[n];

	printf("Enter the elements of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}

	printf("Array before shifting\n");

	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	int hold = array[0];
	for(i=0 ; i<n ; i++){

		shift = (n+i)%(n+1);
		temp = array[i];
		array[i] = array[shift];
		array[shift] = temp;

	}

	array[n-1] = hold;

	printf("Array after shifting\n");

	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}

}
