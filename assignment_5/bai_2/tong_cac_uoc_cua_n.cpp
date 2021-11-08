#include<stdio.h>
int main(){
	int n,s=0;
	printf("nhap vao so n de tinh tong cac uoc:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int d;
		d=n%i;
		if(d!=0)continue;
		s+=i;
	}
	printf("tong cua cac uoc la:%d\n",s);
}
