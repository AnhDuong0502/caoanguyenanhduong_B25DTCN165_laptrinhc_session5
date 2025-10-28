#include<stdio.h>
int main(){
	int  luong;
	float thue;
	 
	printf("Muc thu nhap cua ban la :");
	scanf("%d",&luong);
	if(5<=luong){
		thue=0.15*luong;
	}else if(luong>5&&luong<=10){
		thue=0.1*luong;
	}else if(luong>10){
		thue=0.15*luong;
	}
printf("Thue ban phai tra la %.2f",thue);
return 0;


}


