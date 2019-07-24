#include <stdio.h>

int main(){
	int x,y,z,min,max;
	printf("Nhap vao x :\n");
	scanf("%d",&x);
	printf("Nhap vao y :\n");
	scanf("%d",&y);
	printf("Nhap vao z :\n");
	scanf("%d",&z);
	
	max = x;
	if(y > max)
	max = y;
	if(z > max)
	max = z;
	printf("So lon nhat trong 3 so la so : %d \n",max);
	
	min = x;	
	if(y < min)
	min = y;
	if(z < min)
	min = z;
	printf("So be nhat trong 3 so la so : %d \n",min);
	
	
}
