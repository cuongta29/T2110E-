#include<stdio.h>
#include<conio.h>
int main(){
	int i1=0,i2=1,i3,i,n;
	nhapLai:
	printf("nhap vao so n trong day Fibonancy: \n");
	scanf("%d",&n);
	if(n==1)printf("so %d trong day fibonancy la %d\n",n,i1);
	else if(n==2)printf("so %d trong day fibonancy la %d\n",n,i2);
	
		else if(n>2){
		for(i=3;i<=n;i++){
		i3=i2+i1;
		i1=i2;
		i2=i3;
	}
	printf("so %d trong day Fibonancy la:%d\n",n,i3);}
	else {
		printf("so ban nhap khong hop le n phai lon hon 0\n");
		printf("moi ban nhap lai\n");
		goto nhapLai;
	}
	getch();
	
}
