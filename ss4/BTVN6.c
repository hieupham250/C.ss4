#include<stdio.h>

int main(){
	int n1, n2, n3;
	int max,min,reamining;
	printf("nhap n1: ");
	scanf("%d",&n1);
	printf("nhap n2: ");
	scanf("%d",&n2);
	printf("nhap n3: ");
	scanf("%d",&n3);
	if(n1 > n2 && n1 > n3){
		max = n1;
		if(n2 > n3){
			reamining = n2;
			min = n3;
		} else {
			reamining = n3;
			min = n2;
		}
	} else if(n2 > n1 && n2 > n3){
		max = n2;
		if(n1 > n3){
			reamining = n1;
			min = n3;
		} else {
			reamining = n3;
			min = n1;
		}
	} else {
		max = n3;
		if(n1 > n2){
			reamining = n1;
			min = n2;
		} else {
			reamining = n2;
			min = n1;
		}
	}
	printf("day giam dan %d %d %d",max,reamining,min);
}
    
