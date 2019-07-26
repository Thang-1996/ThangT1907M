#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	double d,x1,x2;
	printf("Nhap vao a : \n");
	scanf("%d",&a);
	printf("Nhap vao b : \n");
	scanf("%d",&b);
	printf("Nhap vao c : \n");
	scanf("%d",&c);
	if(a == 0){
		printf("a phai #0");
	}else{
		d = b*b - 4*a*c;
		if(d < 0){
			printf("Phuong trinh vo nghiem");
		}else if(d == 0){
			x1 = x2 = -b / (2*a);
			printf("Phuong trinh co nghiem kep \n x1 = %lf \n x2 = %lf",x1,x2);
		}else{
			x1 = (-b-sqrt(d))/(2*a);
			x2 = (-b+sqrt(d))/(2*a);
			printf("Phuong trinh co 2 nghiem lan luot la \n: x1 = %lf \n x2 = %lf",x1,x2);
		}
	}
	return 0;
}
	
	

