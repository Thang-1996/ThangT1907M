#include <stdio.h>
#include <string.h>
int main(){
	char s1[20];
	char s2[20];
	printf("Nhap vao chuoi s1 : \n");
	scanf("%s",s1);
	printf("Nhap vao chuoi s2 : \n");
	scanf("%s",s2);
	if(*strstr(s1,s2) == s2[0]){
		printf("s1 chua s2");
	}
	else{
		printf("khong");
	}
}
