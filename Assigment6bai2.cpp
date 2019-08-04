#include <stdio.h>

int main(){
	int n,arr[n];
	printf("Nhap vao so phan tu:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d \n",i);
		scanf("%d",&arr[i]);
	for(int j=0;j<i;j++)
			while(arr[j] == arr[i]){
				printf("Trung Nhau Nhap lai!\n");
				printf("Nhap vao phan tu thu %d\n",i);
				scanf("%d",&arr[i]);
			}
}
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d = %d \n",i,arr[i]);
	}
	return 0;
}

