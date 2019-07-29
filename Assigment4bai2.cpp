#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap vao n: \n");
	scanf("%d",&n);
	int tonguoccuan = 0;
	for(i=1;i<n;i++){
		if(n % i == 0){
			tonguoccuan+=i;
		}
		// kiem tra so hoan hao bang cach tinh cac tong uoc cua so do bang chinh no 
	}
	if(tonguoccuan == n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai la so hoan hao",n);
	}
}
