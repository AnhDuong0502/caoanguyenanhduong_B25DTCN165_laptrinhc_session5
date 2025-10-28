#include<stdio.h>
int main(){
	int age;
	int gia;
	printf("Moi ban nhap tuoi :");
	scanf("%d",&age);
	if(age<6){
		printf("Mien phi");
	}else if(6<=age&&age<=18){
		gia=0.5*20000;
	
	}else if(19<age&&age<60){
		gia=20000;
	}else if(60<age){
		gia=0.7*20000;
		
	}
	printf("Gia ve la %d",gia);


return 0;
}
