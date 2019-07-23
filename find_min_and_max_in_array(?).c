#include <stdio.h>


//?????
void find_min_max(int* arr , int size , int* max , int* min){

	int* i;

	min = arr;
	max = arr;
	arr++;
	for(i=arr ; i<(arr+size) ; i++){
		if(*i>*max){
			*max = *i;
		}
		if(*i<*min){
			*min = *i;
		}
	}
}

// void find_min_max(int array[],int size,int* min,int* max){
// 	int i;
// 	*min = array[0];
// 	*max = array[0];
//
// 	for(i=1 ; i<size ; i++){
// 		if(*min>array[i]){
// 			*min = array[i];
// 		}
// 		if(*max<array[i]){
// 			*max = array[i];
// 		}
// 	}
// }

int main(){

	int i,array[10];
	int min , max;

	printf("Enter the element of arrays(10)\n");
	for(i=0 ; i<10 ; i++){
		scanf("%d",&array[i]);
	}
	find_min_max(array,10,&max,&min);

	// printf("array: \n");
	// for(i=0 ; i<10 ; i++){
	// 	printf("%d ",array[i]);
	// }

	printf("Max value in array : %d\n",max);
	printf("Min Value in array : %d\n",min);

}
