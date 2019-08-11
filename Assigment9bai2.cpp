#include <stdio.h>
#include <string.h>
void nhapchuoi (char arr[][100],int n){
	for(int i=0;i<n;i++){
		printf("Nhap vao chuoi arr[%d] : \n ",i+1);
		scanf("%s",arr[i]);
	}
}
void sapxepalphabe(char arr[][100],int n){
	char temp[20];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(arr[j-1],arr[j]) > 0){
				strcpy(temp,arr[j-1]);
				strcpy(arr[j-1],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	printf("Chuoi sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%s",arr[i]);
	}
}
int main(){
	int n;
	char arr[n][100];
	printf("Nhap vao n : \n");
	scanf("%d",&n);
	nhapchuoi(arr,n);
	sapxepalphabe(arr,n);
}
