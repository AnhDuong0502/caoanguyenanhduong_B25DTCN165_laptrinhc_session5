#include<stdio.h>
int main(){
	int a,b;
	printf("Moi ban nhap a va b :");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("So lon hon la a:%d",a);
		
	}else if(b>a){
	printf("So lon hon la b:%d",b);
	}else if(a==b){
	printf("Hai so bang nhau");
}
return 0;
}
