#include <stdio.h>

int main(){
	int arr1[4][3],i,j,sum1=0;
	int arr2[4][3],k,m,sum2=0;
	printf("\nNhap ma tran 1: \n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         printf("\nNhap phan tu arr1[%d][%d] : ", i, j);
         scanf("%d", &arr1[i][j]);
      }
   }
	for (i = 0; i < 4; i++) {
      for (j = 0; j < 3; j++) {
         sum1 = sum1 + arr1[i][j];
      }
   }
	printf("\nNhap ma tran 2: \n");
   for (k = 0; k < 4; k++) {
      for (m = 0; m < 3; m++) {
         printf("\nNhap phan tu arr2[%d][%d] : ", k, m);
         scanf("%d",&arr2[k][m]);
      }
   }
	for (k = 0; k < 4; k++) {
      for (m = 0; m < 3; m++) {
         sum2 = sum2 + arr2[k][m];
      }
   }
	printf("Tong ma tran 1 = %d \n",sum1);
	printf("Tong ma tran 2 = %d\n",sum2);
	printf("Cong 2 ma tran : %d + %d = %d\n",sum1,sum2,sum1+sum2);
	printf("Cong 2 ma tran : %d - %d = %d\n",sum1,sum2,sum1-sum2);
}
