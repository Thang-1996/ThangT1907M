#include<stdio.h>
int sum(int a, int b)
{
	int tong;
	tong = a + b;
	printf("\nTong 2 so la: %d", tong);
	return tong;
}
int sub( int a, int b)
{
	int hieu;
	hieu = a - b;
	printf("\nHieu 2 so la: %d ", hieu);
	return hieu;
}
int multi(int a, int b)
{
	int tich;
	tich = a*b;
	printf("\nTich 2 so la: %d ", tich);
	return tich;
}
double div(int a, int b)
{
	double thuong;
	thuong = a/b;
	printf("\nThuong 2 so la:%lf ", thuong);
	if(a ==0 || b ==0);
	printf("\nThuong la 0 ");
	return thuong;
}
int main()
{
menu :
int n,a,b;
printf("\n Calculation ");
printf("\n============================");
printf("\n1. Input Number ");
printf("\n2. Calculate Sum ");
printf("\n3. Calculate Substraction ");
printf("\n4. Calculate Multiplation ");
printf("\n5. Calculate Division ");
printf("\n6. Thoat ");
printf("\n============================");
printf("\nChon so tuong ung: ");
scanf("%d",&n);
switch(n)
{
case 1:
	printf("Nhap vao a: \n");
	scanf("%d",&a);
	printf("Nhap vao b : \n");
	scanf("%d",&b);
	goto menu;
	break;
case 2:
	sum(a,b);
	goto menu;
	break;
case 3:
	sub(a,b);
	goto menu;
	break;
case 4:
	multi(a, b);
	goto menu;
	break;
case 5:
	div(a,b);
	goto menu;
	break;
case 6:
	return 0;
	break;
	default: printf("\nBan chon sai Xin vui long nhap lai(1->6)");
} 
}

