#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	double A,S,n;
	printf("nhap so tien gui ngan hang: .\n");
	scanf("%lf",&A);
	printf("nhap so nam ban gui tien o ngan hang: .\n");
	scanf("%lf",&n);
	S=A*pow(1+0.08,n);
	printf("so tien ban gui ngan hang sau %.1lf nam la:%.5lf",n,S);
	getch();

}

