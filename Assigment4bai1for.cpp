#include <stdio.h>

int main(){
	int a,b,c,i;
	printf("Nhap a : \n");
	scanf("%d",&a);
	printf("Nhap b : \n");
	scanf("%d",&b);
	printf("Nhap c : \n");
	scanf("%d",&c);
	for(i=0;!(a+b > c && a+c > b && b+c > a);i++){
		printf("day khong phai la 3 canh cua 1 tam giac moi nhap lai \n:");
		printf("Nhap a : \n");
		scanf("%d",&a);
		printf("Nhap b : \n");
		scanf("%d",&b);
		printf("Nhap c : \n");
		scanf("%d",&c);
	}
	printf("Day la 3 canh cua 1 tam giac");
}
