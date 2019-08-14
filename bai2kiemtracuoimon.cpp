#include <stdio.h>

int main(){
	int arr[10];
	printf("Input 10 numbers:\n ");
	for(int i=0;i<10;i++){
		printf("Number%d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Result:");
	for(int i=9;i>=0;i--){
		printf("%d \t",arr[i]);
	}
}
