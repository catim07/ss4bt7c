#include<stdio.h>
int main(){
	int year;
	do{
	
	printf("moi ban nhap nam de ktra nam nhuan: ");
	scanf ("%d",&year);
	if (year<=0){
		printf("so khong hop le.\n");
	}
}while(year<=0);
	if((year%4==0 && year%100!=0)||(year%400==0)){
		printf("nam ban nhap la nam nhuan");
	}else{
		printf("nam ban nhap khong phai la nam nhuan");
	}
	return 0;
}
