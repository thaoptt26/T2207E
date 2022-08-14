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
	int hmax=0;
	
	for(i=0;i<n;i++){
	
		if(x>=a[i]){
			hieu=x-a[i];
			}else{
			hieu=a[i]-x;
		}
		if(hieu>hmax){
			hmax=hieu;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]-x==hmax||x-a[i]==hmax){
			printf("gia tri trong mang xa gia tri x nhat la: %d",a[i]);
		}
	}
}

	

    
   
   
   

 

