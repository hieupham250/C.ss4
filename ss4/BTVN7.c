#include<stdio.h>

int main(){
	float a,b,c,d,luong,luongdb,luongthem; //a:la luong co ban, b: la ngay cong thuc te, c: la so ngay cong, d: ngay du
	c = 26; 
	printf("nhap luong co ban: ");
	scanf("%f",&a);
	printf("nhap ngay cong thuc te: ");
	scanf("%f",&b);
	if(b>c){
		d = b-c;
		luongthem=(a/26)*d*(150/100);
		luongdb = luongthem+a;
		printf("luong cua nhan vien: %.1f",luongdb);
	
	} else {luong = a*(b/c);
	printf("luong cua nhan vien: %.1f",luong);
	}
}
