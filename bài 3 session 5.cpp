#include<stdio.h>
int main(){
	float diem;
	printf("Moi ban nhap diem tb:");
	scanf("%f",&diem);
	if(diem<5){
		printf("Hoc luc yeu",diem);
	}else if(diem>=5&&diem<6.5){
		printf("Hoc luc trung binh ",diem);
	}else if(diem>=6.5&&diem<8){
		printf("Hoc luc kha",diem);
	}else if(diem>=8){
		printf("Hoc luc gioi",diem);
	}
return 0;
}
