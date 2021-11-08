#include<stdio.h>
int main(){
	int n;
	printf("nhap so n:\n");
	scanf("%d",&n);
	int im[n];
	for(int i=0;i<n;i++){
		printf("nhap vao so nguyen thu %d: \n",i+1);
		scanf("%d",&im[i]);
		
	}
	int icc;
	for(int i=0;i<n;i++){
		if(im[i]%2==0)continue;
		icc=im[i];
		
	}printf("so le cuoi cung trong bang la:%d",icc);
}
