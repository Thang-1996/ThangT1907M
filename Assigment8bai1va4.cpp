#include <stdio.h>
//bai1
int timgiatrilonnhat(int arr[],int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
//bai4
int timgiatriganlonnhat(int arr[],int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	int n_max = arr[0];
	for(int i=0;i<n;i++){
		if(max == arr[0]){
			n_max = arr[1];
		}
		if(n_max < arr[i] && arr[i] < max){
			n_max = arr[i];
		}
	}
	return n_max;
}
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang : \n");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu arr[%d] \n",i);
		scanf("%d",&arr[i]);
	}
	printf("Phan tu lon nhat cua mang la %d \n",timgiatrilonnhat(arr,n));
	printf("Phan tu gan lon nhat cua mang la %d \n",timgiatriganlonnhat(arr,n));
}
