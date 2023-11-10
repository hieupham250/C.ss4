#include<stdio.h>

int main(){
	int cu,moi;
	printf("nhap so dien cu:");
	scanf("%d",&cu);
	printf("nhap so dien moi:");
	scanf("%d",&moi);
	int sodien= moi - cu ;
	if(0<=sodien<50){
	printf("tien dien la :%d",sodien*10000);
	}else if(50<=sodien<100){
	printf("tien dien la :%d",sodien*15000);
	}else if(100<=sodien<150){
	printf("tien dien la :%d",sodien*20000);
	}else if(150<=sodien<200){
	printf("tien dien la :%d",sodien*25000);
	}else {
		printf("tien dien la :%d",sodien*30000);
	}
}
