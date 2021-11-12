#include<stdio.h>
int tongCacChuSoCuaN(int n){
	int arr[n];
	int s=0;
	for(int i=0;n/10!=0;i++){
		arr[i]=n%10;
		 s+=arr[i];
		 n/=10;
	}
	s+=(n%10);
	return s;
}
int main(){
	int n;
	printf("nhap vao so n: \n");
	scanf("%d",&n);
	printf("tong cac chu so cua %d la %d\n",n,tongCacChuSoCuaN(n));
}
