#include<stdio.h>
int main(){
	//cho mang n so nguyen, tim doan [-x,x] chua tat ca cac gia tri trong mang
	int n;
	printf("vui long nhap so n:\n");
	scanf("%d",&n);
	int a[n];
	printf("nhap mang:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	int hieu;
	int hmax=0;
	for(i=0;i<n;i++){
		if(a[i]>=0){
			hieu=a[i];
		}else{
			hieu=-a[i];
		}
		if(hieu>hmax){
			hmax=hieu;
		}
	}
	printf("doan can tim la:[-%d,%d]",hmax,hmax);
	
}
