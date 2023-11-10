#include<stdio.h>

int main(){
	int day,month,year;
	printf("nhap ngay: ");
	scanf("%d",&day);
	printf("nhap thang: ");
	scanf("%d",&month);
	printf("nhap nam: ");
	scanf("%d",&year);
	if(day>0 && 0<month<=12 && year>0){
		switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("ngay %d thang %d nam %d hop le",day,month,year);
			break;
		case 2:
			if(year%4==0 && year%100!=0){
				printf("ngay %d thang %d nam %d hop le",day,month,year);
			} else{
				printf("khong hop le moi nhap lai");
			}
		break;
		case 4: case 6: case 9: case 11:
			printf("ngay %d thang %d nam %d hop le",day,month,year);
		break;
	}
	} else{
		printf("khong hop le, moi nhap lai");
	}
}
