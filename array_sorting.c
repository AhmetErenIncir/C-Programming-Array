//Kucukten buyuge siralama
#include <stdio.h>

void sorting_arr(int array[] , int size){
	int i,j,temp,min;
	for(i=0 ; i<size ; i++){ //tum indislerin icin en kucuk degerler sirasiyla bulunur
		min = i; //baslangicta i her zaman en kucuk indis kabul edilir.
		for(j=i+1 ; j<size ; j++){ //i den bir sonraki elemandan arrayin son elemanina kadar karsilastirma yapilir
			if(array[j]<array[min]){ //kucuk eleman bulunursa o kucuk elemanin oldugu indisteki array elemani ile i swap edilir
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(){
	int i , n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int array[n];

	printf("Enter the elements of array\n");
	for(i=0 ; i<n ; i++){
		scanf("%d",&array[i]);
	}

	sorting_arr(array,n);

	printf("After Sorting :\n");
	for(i=0 ; i<n ; i++){
		printf("%d ",array[i]);
	}
}
