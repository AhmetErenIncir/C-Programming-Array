#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AY 12
#define GUN 30

int main(){
	int yagis_miktari[AY][GUN],i,j,sum=0;;

	printf("Gunluk yagis miktarlarini giriniz\n");
	for(i=0 ; i<AY ; i++){
		for(j=0 ; j<GUN ; j++){
			printf("%d. ayin %d. gununde dusen yagis miktarini girinz\n",(i+1),(j+1) );
			scanf("%d",&yagis_miktari[i][j]);
		}
	}

	for(i=0 ; i<AY ; i++){
		for(j=0 ; j<GUN ; j++){
			sum += yagis_miktari[i][j];
		}
	}

	printf("Dusen toplam yagis : %d\n",sum);
	printf("Dusen ortalama yagis : %d\n",(sum/AY) );


}
