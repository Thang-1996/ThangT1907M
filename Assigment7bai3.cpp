#include <stdio.h>

int main(){
	int arr[4][3];
	printf("Nhap ma tran: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("Nhap vao phan tu arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
			}
	}
	printf("Ma tran vua nhap");
	for(int i=0;i<4;i++){
		printf("\n");
		for(int j=0;j<3;j++){
			printf("%5d",arr[i][j]);
		}
	}
	
	for(int i=1;i<4;i++){	
		int temp;
		for(int j=0;j<i;j++){
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	printf("\n");
	printf("Ma tran sau khi chuyen vi : \n");
	for(int i=0;i<4;i++){
		printf("\n");
		for(int j=0;j<3;j++){
			printf("%5d",arr[i][j]);
		}
	}
	
	
}
