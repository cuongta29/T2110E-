#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap vao canh a: \n");
	scanf("%d",&a);
	printf("nhap vao canh b: \n");
	scanf("%d",&b);
	printf("nhap vao canh c: \n");
	scanf("%d",&c);
	if(a<=0||b<=0||c<=0){
	
	while(a<=0||b<=0||c<=0){
		printf("loi dieu kien: a,b,c>=0\n");
		printf("moi ban nhap lai");
		printf("nhap vao canh a: \n");
	scanf("%d",&a);
	printf("nhap vao canh b: \n");
	scanf("%d",&b);
	printf("nhap vao canh c: \n");
	scanf("%d",&c);
		
	}
}else 
while(a+b<=c||b+c<=a||a+c<=b){
	printf("3 canh a,b,c khong phai la 3 canh cua tam giac\n Moi nhap lai");
	printf("nhap vao canh a: \n");
	scanf("%d",&a);
	printf("nhap vao canh b: \n");
	scanf("%d",&b);
	printf("nhap vao canh c: \n");
	scanf("%d",&c);
	
}
float p,P;
int S;
p=(float)(a+b+c)/2;
P=sqrt(p*(p-a)*(p-b)*(p-c));
S=p*2;
printf("chu vi tam giac la:%d\n",S);
printf("dien tich tam giac là:%f\n",P);

}

