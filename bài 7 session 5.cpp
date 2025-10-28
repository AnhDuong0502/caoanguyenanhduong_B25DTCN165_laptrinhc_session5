#include<stdio.h>
int main(){
	char ch;
	printf("Moi ban nhap ky tu :");
	scanf("%c",&ch);
	if(65<=ch&&ch<=90){
		ch=ch+32;
		printf("in ra man hinh chu thuong %c",ch);
		
	}else if(97<=ch&&ch<=122){
		ch=ch-32;
		printf("in ra man hinh chu thuong %c",ch);
	}else{
		printf("Ko phai chu cai");
	}
	return 0;
}
