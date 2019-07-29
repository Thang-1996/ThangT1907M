#include <stdio.h>
int main(){
	int a,b,c;
	do{
	printf("Nhap a: \n");
	scanf("%d",&a);
	printf("Nhap a: \n");
	scanf("%d",&b);
	printf("Nhap a: \n");
	scanf("%d",&c);
	}
	while(a+b < c || a+c < b || b+c < a);
	printf("Day la 3 canh cua 1 tam giac");
}

