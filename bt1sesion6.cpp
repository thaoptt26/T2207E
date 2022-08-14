#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	
	int a[n]; 
	int i,max;
	
	for(i=0;i<n;i++){
		printf("vui long nhap a%d: ",i);
		scanf("%d",&a[i]);
		}
	max=a[0];
	for(i=0;i<n;i++){
	
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("so lon nhat la: %d",max);
	
		//gan so nhi: thuoc tap hop nhung khong phai max:
		int nhi=max;
	for(int i=0;i<n;i++){
		if(a[i] < max){
			nhi=a[i];
			break;
		}
	}
	if(nhi==max){
		printf("mang khong co gia tri gan lon nhat");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]>nhi && a[i]<max){
				nhi=a[i];
			}
		}
		printf("so lon gan nhat la: %d",nhi);
	}
}

