#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d" ,&a);
	 
	int b;
	printf("Nhap b=");
	scanf("%d" ,&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d" ,&c);
	if (a>b){
	if (a>c){
		printf("max:%d",a);
	}else 
	
		printf("max:%d",c);	 
	
}else {
	if (b>c){
		printf ("max:%d",b);
	}	else {
		
		printf("max:%d",c); 
	}
	} 
}
