#include <stdio.h>

void PrintArray(int array[],int size){
	int i;
	for(i=0 ; i<size ; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}

void RotateArraybyOne(int array[] , int size){
	int i ,hold;

	hold = array[0]; //birinci eleman direk en sona gidecegi icin temp degiskende saklanir.
	for(i=0 ; i<size-1 ; i++){
		array[i] = array[i+1]; //bir sola kaydirma islemi yapilir.
	}
	array[size-1] = hold; //arrayin saklanan ilk elemani arrayin sonuna gider.
}

int main(){
	int size , rotate_time , i ;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int array[size];

	printf("Enter the elements of array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",&array[i]);
	}

	printf("Array : ");
	PrintArray(array,size);

	printf("%s\n","Enter the rotate time to left");
	scanf("%d",&rotate_time);
	rotate_time = rotate_time % size; //kaydirma islemi boyuttan buyuk olamaz.Gercek kaydirma sayisi bulunur.

	for(i=1 ; i<=rotate_time ; i++){
		RotateArraybyOne(array,size); //girilen sayi kadar sola kaydirma islemi yapilir
	}

	printf("Array after shifting\n");
	PrintArray(array,size);
}
