#include<stdio.h>

int main(){
	float markHtml, markCss, markJavacript;
	printf("nhap vao diem html, css, javacript cua sinh vien: ");
	scanf("%f %f %f", &markHtml, &markCss, &markJavacript);
	float avgMark = (markHtml + markCss + markJavacript)/3;
	if(avgMark < 5){
		printf("Xep loai sinh vien: Yeu");
	} else if(avgMark < 7){
		printf("Xep loai sinh vien: Trung binh");
	} else if(avgMark < 8){
		printf("Xep loai sinh vien: Kha");
	} else if(avgMark < 9){
		printf("Xep loai sinh vien: Gioi");
	} else{printf("Xep loai sinh vien: Xuat sac");
	}
}
