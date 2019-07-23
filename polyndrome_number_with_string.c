#include <stdio.h>
#include <string.h>

void polyndrome(char *num){
	int size = strlen(num);
	char* end_ptr = &num[size-1];
	int flag=0;
	while(num<end_ptr){
		if(*num==*end_ptr){
			flag++;
		}
		end_ptr--;
		num++;
	}
	if((size/2)==flag){
		printf("This number is polyndrome\n");
	}
	else{
		printf("This number is not polyndrome\n");
	}
}

int main(){
	char number[10];
	printf("Enter number\n");
	scanf("%s",number);
	polyndrome(number);
}
