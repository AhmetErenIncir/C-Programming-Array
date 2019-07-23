#include "stdio.h"
//https://codeforwin.org/2015/07/c-program-to-find-frequency-of-each-element-in-array.html

#define MAX_SIZE_OF_ARRAY 100

int main(){

	int freq[MAX_SIZE_OF_ARRAY] , i ,array[MAX_SIZE_OF_ARRAY] , j ,size,flag=0;

	printf("%s\n","Enter the size of array");
	scanf("%d",&size);

	printf("Enter the elements os array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",&array[i]);
		freq[i] = -1;
	}

	printf("Array : ");
	for(i=0 ; i<size ; i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	for(i=0 ; i<size-1 ; i++){
		flag = 1;
		for(j=i ; j<size ; j++){
			if(array[i]==array[j]){
				flag++;
			}
		}
		if(freq[i] != 0)
        {
            freq[i] = flag;
        }
	}

	for(i=0 ; i<size ; i++){
		if(freq[i] != 0){
			printf("%d occurs %d times\n",array[i],freq[i]+1);
		}
	}


}
