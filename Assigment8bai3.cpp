#include <stdio.h>
void inmang(int arr[][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
}
int hangcotonggiatrilonnhat(int arr[][4]){
	int max = 0,x = 0;

 	for (int i = 0; i < 4; ++i)
	{	int tong = 0;
		for (int j = 0; j < 4; ++j)
		{
			tong += arr[i][j];
		}
	//	if(i == 0){
	//		max  = tong;
//		}
		if(max < tong){
			max = tong;
			x = i;
		}
	}
	return x;
}




int main(){
	int arr[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Nhap vao phan tu arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	inmang(arr);
	printf("hang co tong gia tri lon nhat la hang %d",hangcotonggiatrilonnhat(arr));
}
