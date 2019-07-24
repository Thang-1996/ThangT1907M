#include <stdio.h>

int main(){
	int x,y;
	printf("Nhap vao x :\n");
	scanf("%d",&x);
	printf("Nhap vao y :\n");
	scanf("%d",&y);
	if(x > y){
		printf("Thuong cua 2 so la %d / %d = %d",x,y,x/y);
	}else{
		printf("Tich cua 2 so la %d * %d = %d",x,y,x*y);
	}
}
