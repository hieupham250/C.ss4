#include<stdio.h>

int main(){
	int so_cu,so_moi;
	printf("nhap chi so cu: ");
	scanf("%d",&so_cu);
	printf("nhap chi so moi: ");
	scanf("%d",&so_moi);
	int so_dien = so_moi-so_cu;
	printf("gia dien; %d\n",so_dien);
	if(so_dien < 50){
		printf("gia dien la: 10000VND");
	} else if(so_dien < 100){
		printf("gia dien la: 15000VND");
	} else if(so_dien < 150){
		printf("gia dien la: 20000VND");
	} else if(so_dien < 200){
		printf("gia dien la: 25000VND");
	} else{
		printf("gia dien la: 30000VND");
	}
}
