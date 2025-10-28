#include<stdio.h>
int main(){
	int nuoc,tong_tien;
	printf("Moi ban nhap vao m3 nuoc ");
	scanf("%d",&nuoc);
	if(0<=nuoc&&nuoc<=10){
		tong_tien=nuoc*6000;
		
	}else if(11<=nuoc&&nuoc<=20){
		tong_tien=10*6000+(nuoc-10)*7000;
		
	}else if(21<=nuoc&&nuoc<=30){
		tong_tien=10*6000+10*7000+(nuoc-20)*8500;
		
	}else if(30<nuoc){
		tong_tien=10*6000+10*7000+10*8500+(nuoc-30)*10000;
		
	}
 printf("so tien nuoc la: %d VND",tong_tien);
return 0;
}
