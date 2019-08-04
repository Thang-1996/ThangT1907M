#include <stdio.h>

int main(){
	int arr [10];
	int i;
	double sumarr;
	double avgarr;
	for(i=0;i<10;i++){
		printf("Nhap vao phan tu thu %d : \n",i);
		scanf("%d",&arr[i]);
		sumarr+=arr[i];
		avgarr=sumarr/i;
	}
	printf("Gia tri trung binh cua mang = %lf",sumarr);
	return 0;
	}

