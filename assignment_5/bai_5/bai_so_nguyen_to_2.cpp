#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i;
	printf("nhap so a: \n",&a);
	scanf("%d",&a);
	printf("nhap so b: \n",&b);
	scanf("%d",&b);
	while(!(a<b)){
	printf("moi nhap lai hai so a va b (a<b): \n");
	printf("nhap so a: \n",&a);
	scanf("%d",&a);
	printf("nhap so b: \n",&b);
	scanf("%d",&b);
	}
	printf("cac so nguyen to trong khoang tu a den b la: \n");
	for(i=a;i<=b;i++){
		int count=0,d;
		for(int j=1;j<=i;j++){
			d=i%j;
			if(d==0)count++;
		}if(count!=2)continue;
		printf("%d\n",i);
	}
	getch();
}
