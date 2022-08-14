#include<stdio.h>
int main (){
	int n;
	printf ("vui long nhap n=");
	scanf ("%d",&n);
	
	int arr[n];
	int i,max,nhi;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	printf("so lon nhat la:%d",max);
	// thuoc tap hop nhung khong phai max
	
	nhi=0;
	for(int i=0;i<n;i++){
		if(arr[i]<max){
			nhi=arr[i];
			break;
		}
	}
	if(nhi=max){
		printf("mang khong co gia tri gan lon nhat\n");
	}else{
	for(i=0;i<n;i++){
		if(arr[i]>nhi && arr[i]!=max )
		nhi=arr[i];
		break;
	}
	printf (" nhi la:%d",nhi);
	}
}

	

