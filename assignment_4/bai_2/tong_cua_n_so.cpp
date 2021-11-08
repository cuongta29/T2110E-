#include<stdio.h>
int main(){
	int i,s,n;
	printf("nhap vao so n de tinh tong: \n");
	scanf("%d",&n);
	i=0;
	s=0;

	while(i<n){
		i++;
		s+=i;
	}
	printf("tong la %d",s);
}
