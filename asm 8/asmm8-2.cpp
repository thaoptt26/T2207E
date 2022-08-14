#include<stdio.h>
//viet ham tim uoc chung lon nhat

int timUCLN(int a,int b,int c){
	return a+b+c;
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
			break;
		}
	}
}
int timBCNN(int a,int b){
	for(int i=a; ;i++){
		if(i%a==0 && i%b==0){
			return i;
			break;
		}
	}
}


