#include <stdio.h>

int main(){
	int arr[4][4],sum=0,i,j,avg;
	
	printf("\nNhap ma tran : \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         printf("\nNhap phan tu arr[%d][%d] : ", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   printf("Ma tran vua nhap : \n");
   for (i = 0; i < 4; i++) {
   	printf("\n");
      for (j = 0; j < 4; j++) {
      	printf("%5d",arr[i][j]);
      }
  }
	for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         sum = sum + arr[i][j];
      }
   }
   avg = sum/4;
   	printf("\n");
	printf("trung binh cong duong cheo = %d",avg);
}
