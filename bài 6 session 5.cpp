#include<stdio.h>
int main(){
	float a,b,result;
	char op;
	printf("Moi ban nhap a va b:");
	scanf("%f %f" ,&a,&b);
	printf("Moi ban nhap toan tu\n");
	scanf(" %c",&op);
	switch(op){
		case '+':
			result=a+b;
			printf("Ket qua la :%.2f",result);
			break;
		case '-':
		    result=a-b;
		    printf("Ket qua la :%.2f",result);
		    break;
		case '*':
			result=a*b;
			printf("Ket qua la :%.2f",result);
			break;
		case '/':
			if(b==0){
				printf("Khong the chia cho 0");
				
			}else{
			
		
		
			result=a/b;
			printf("Ket qua la :%.2f",result);
		}
		
			break;		
		default:
		printf("Toan tu khong hop le");
	}

return 0;
}
