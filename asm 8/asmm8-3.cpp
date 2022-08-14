#include<stdio.h>
int timBCNN(int a,int b){
	for(int i=a; ;i++){
		if(i%a==0 && i%b==0){
			return i;
			break;
		}
	}
}
