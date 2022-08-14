#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap so n:\n");
	scanf("%d",&n);
	int a[n];
	printf("nhap mang:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	printf("vui long nhap x:\n");
	scanf("%d",&x);
	
	int hieu=0;
	// gan hmin la gtri lon nhat trong mang
	int hmin=x;
	for(i=0;i<n;i++){
		if(a[i]>hmin){
			hmin=a[i];
		}
	}
	
	for(i=0;i<n;i++){
	
		if(x>=a[i]){
			hieu=x-a[i];
			}else{
			hieu=a[i]-x;
		}
		if(hieu<hmin){
			hmin=hieu;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]-x==hmin||x-a[i]==hmin){
			printf("gia tri trong mang gan gia tri x nhat la: %d\n",a[i]);
			
		}
	}
}
