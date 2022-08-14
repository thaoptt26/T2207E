#include<stdio.h>
int main(){
	// bt nhap vao n so nguyen, dam bao cac so khong trung nhau
	int n;
	printf("vui long nhap so n:\n");
	scanf("%d",&n);
	int a[n];
	printf("nhap mang:\n");
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("vui long nhap lai mang:");
				break;
			}
			
		}
	}
}
