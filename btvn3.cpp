#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap so n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("nhap mang:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int a,b;
	a=arr[1];
	for(i=0;i<n;i++){
		if(arr[i]<a){
			a=arr[i];
		}
	}
	b=arr[1];
	for(i=0;i<n;i++){
		if(arr[i]>b){
			b=arr[i];
		}
	}
	printf("doan can tim la[%d,%d]",a,b);
}
