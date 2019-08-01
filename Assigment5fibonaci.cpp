#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap vao n : \n");
	scanf("%d",&n);
	if(n<2){
		printf("Phai nhap n lon hon hoac bang 2");
	}else{
	
	int fiboN = 1, fibo1 = 1, fibo2 = 1;
	for(i = 2;i<n;i++){
		fiboN = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fiboN;
	}
	printf("so fibonacci thu %d = %d ",n,fiboN);
}
}
