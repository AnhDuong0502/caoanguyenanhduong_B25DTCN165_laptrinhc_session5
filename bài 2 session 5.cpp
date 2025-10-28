#include<stdio.h>
int main(){
	float a,b,x;
	printf("Moi ban nha vao a va b ");
	scanf("%f %f",&a,&b);
	if(a==0&&b==0){
		printf("Phuong trinh co vo so no");
	}else if(a==0&&b!=0){
		printf("Phuong trinh vo no");
	}else if(a!=0){
		x=-b/a;
		printf("Phuong trinh co no x= %.2f",x);
	}
	
	
	
	return 0;
}
