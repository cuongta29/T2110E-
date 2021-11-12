#include<stdio.h>
int uocChungCua2So(int a,int b){
	int ucln=0;
	for(int i=1;i<=a&&i<=b;i++){
		int d1=a%i;
		int d2=b%i;
		if(d1==0&&d2==0&&ucln<i){
			ucln=i;
		}
	}
	return ucln;	
}
int main(){
	int a,b;
	printf("nhap vao so a:\n");
	scanf("%d",&a);
	printf("nhap vao so b:\n");
	scanf("%d",&b);
	printf("uoc chung lon nhat cua hai so %d va %d la %d\n",a,b,uocChungCua2So(a,b));
	int bcnn=a*b/uocChungCua2So(a,b);
	printf("boi chung nho nhat cua hai so la:%d",bcnn);
	
}

