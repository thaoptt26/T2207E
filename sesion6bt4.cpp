#include<stdio.h>;
int main(){
	int n;
	printf("vui long nhap n\n");
	scanf("%d",&n);
	
	int a[n];
	int i,s=0;
	for (i=0;i<n;i++){
		printf("vui long nhap a%d\n",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(a[i]%2==1){
			printf("so le cuoi cung la: %d",a[i]);
			s++;
			break;
		}
	}
	if(s==0){
		printf("day khong co so le");
	}
}

