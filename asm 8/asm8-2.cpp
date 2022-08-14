#include<stdio.h>
#include<math.h> 
float chuvi(int a, int b, int c) {
    return a + b + c;
}
int main(){
    int a, b, c;
    printf ( "Nhap canh a= ");
    scanf("%d",&a); 
	printf  ("Nhap canh b=");
    scanf("%d",&b); 
   printf ( "Nhap canh c=");
  scanf("%d",&c); 
    if (a >= b + c || b >= a + c || c >= a + b)
        printf ("ba canh vua nhap khong phai la 3 canh cua tam giac");
    else {
        printf ( "Chu vi cua tam giac la:chuvi(a,b,c");
    }
    
    return 0;
}
 
