#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap canh a: ");
	scanf("%d",&a);
	printf("nhap canh b: ");
	scanf("%d",&b);
	printf("nhap canh c: ");
	scanf("%d",&c);
	if(a==b && a==c && b==c){
		printf("tam giac deu");
	} else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		printf("tam giac vuong");
	} else if(a==b || a==c || b==c && a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		printf("tam giac vuong can");
	} else if(a==b || a==c){
		printf("tam giac can");
	} else if(a+b>c && a+c>b && b+c>a){
		printf("tam giac thuong");
	}
}
