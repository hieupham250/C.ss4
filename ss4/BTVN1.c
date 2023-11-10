#include<stdio.h>

int main(){
	int number;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&number);
	if(number % 3 == 0 && number % 5 == 0){
		printf("so %d chia het cho 3 va 5",number);
	} else {
		printf("so %d khong chia het cho 3 va 5",number); 
	} 
}

