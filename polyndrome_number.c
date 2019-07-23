#include <stdio.h>

int main(){

	int number , reverse = 0 , backup , k;
	printf("Enter the number\n");
	scanf("%d",&number);
	backup = number;

	do{
		k = number%10;
		reverse = reverse*10+k; // ****
		number /= 10;
	}while(number>0);

	if(reverse == backup){
		printf("polyndrome\n");
	}
	else{
		printf("not polyndrome\n");
	}
}
