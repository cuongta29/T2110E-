#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i1,i2,d1,d2;
	printf("nhap vao so a:\n");
	scanf("%d",&a);
	printf("nhap vao so b:\n");
	scanf("%d",&b);
	for(i1=1;i1<=a&&i1<=b;i1++){
		d1=a%i1;
		d2=b%i1;
		if(d1!=0||d2!=0)continue;
		i2=i1;
	}printf("uoc cung lon nhat cua %d va %d la: %d",a,b,i2);
	getch();
	}

