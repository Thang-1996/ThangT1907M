#include <stdio.h>
void inmangdaxapxep(int arr[]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}



int main(){
	int arr[5] = {4,2,1,3,5};
	printf("Mang truoc khi sap xep :");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Mang sau khi sap xep :");
	inmangdaxapxep(arr);
}
