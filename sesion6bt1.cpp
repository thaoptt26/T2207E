#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	
	int a[n];
	int i,s=0,m=0;
	for(i=0;i<n;i++){
		printf("vui long nhap so thu %d la:\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(i%2==0 && a[i]%2==1){
			
				s=s+a[i];
				m=m+1;
			}
		}
	
	float tbc;
	tbc=s/(float(m));
	printf("tbc la: %f",tbc);
}
