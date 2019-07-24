#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Mang();
int NhapSinhVien();
struct infostd {
	int nost;
	char namesv[50];
	int mark;
	char result;
	
}student[10];
int main (){
	int a[10];
	menu :
	printf("*********************************************\n");
	printf("*Selecting appropriate action:	            *\n");
	printf("*1. Question 1	                            *\n");
	printf("*2. Question 2	                            *\n");
	printf("*3. Quit program	                    *\n");
	printf("*********************************************\n");
	int choice;
	printf("Enter the choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1 :
			Mang();
			goto menu;
			break;
		break;
		case 2 :
			NhapSinhVien();
			goto menu;
		break;
		case 3:
			return 0;
			break;
	default :
		printf("Invalid value !");
		goto menu;
		break;
	}
}
int Mang()
{
	int a[10];
	for(int i = 0;i<10;i++){
		printf("Enter the number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int demle = 0;
	for(int i=0; i<10; i++)
	{
		if(a[i] %2 != 0){
			demle ++;
		
		}
	}
		printf("Sum of Old Number is : %d \n",demle);
		printf("Sum of Even Number is : %d \n",10-demle);
}
int NhapSinhVien(){
	int n,j;
	nhapsv :
	printf("Enter the number of student:  ");
	scanf("%d",&n);
	int arr[n];
	if(n>=1 && n<=10){
	for(int j=0;j<n;j++){
		printf("Enter the name student %d :",j+1);
		scanf("%s",student[j].namesv);
		printf("Enter the no of student %d :",j+1);
		scanf("%d",&student[j].nost);
		printf("Enter the mark of student %d :",j+1);
		scanf("%d",&student[j].mark);
		if(student[j].mark < 5){
			student[j].result = 'R';
		}else{
			student[j].result = 'P';
	}
	}
	}
	else{
		printf("The number rannge is 1-10 try agian \n");
		goto nhapsv;
	}
	for(int j=0;j<n;j++){
		printf("STT:%d NO:%d Name:%s Mark:%d Result:%c \n",j+1,student[j].nost,student[j].namesv,student[j].mark,student[j].result);
	}
}


