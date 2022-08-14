#include<stdio.h>
//viet ham tinh tong cac chu so cua 1 so nguyen:
int tongCacChuSo(int a){
	int s=0;
	if(a<0){
		a=-a;
	}
	while(a>0){
		s=s+a%10;
		a=a/10;
		}
	return s;
}



