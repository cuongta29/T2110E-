#include<stdio.h>
#include<conio.h>
int main(){
	float s,n;
	printf("nhap vao so tien gui trong 4 nam o ngan hang: .\n");
	scanf("%f",&s);
	n=0;
    if(n!=4){
		n=n+1;
		s=s*1.08;
	}
	if(n!=4){
		n=n+1;
		s=s*1.08;
	}
	if(n!=4){
		n=n+1;
		s=s*1.08;
	}if(n!=4){
		n=n+1;
		s=s*1.08;
	}
	printf("so tien sau 4 nam la:%.3f.\n",s);
	getch();
}
