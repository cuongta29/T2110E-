#include<stdio.h>
#include<math.h>
int chuViTamGiac(int a,int b,int c){
	int p=a+b+c;
	return p;
}
int dienTichTamGiac(int a,int b,int c){
	float p=(a+b+c)/2;
	int s;
	s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	int a,b,c;
	printf("nhap vao canh a:\n");
	scanf("%d",&a);
	printf("nhap vao canh b:\n");
	scanf("%d",&b);
	printf("nhap vao canh c:\n");
	scanf("%d",&c);
	printf("chu vi tam giac la:%d\n",chuViTamGiac(a,b,c));
	printf("dien tich tam giac la:%d\n",dienTichTamGiac(a,b,c));
}
