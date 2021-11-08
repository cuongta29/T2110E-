#include<stdio.h>
int main(){
	int n,inn;
	printf("nhap so n:\n");
	scanf("%d",&n);
	int im[n];
	for(int i=0;i<n;i++){
		printf("nhap vao so nguyen thu %d: \n",i+1);
		scanf("%d",&im[i]);
		
	}
	int max;
	max=im[0];
	for(int i=0;i<n;i++){
		if(im[i]>max)
		max=im[i];
	}
	for(int i=0;i<n;i++){
		if(im[i]<=0)continue;
		inn=max;
		if(im[i]<inn)
		inn=im[i];
		
		
	}printf("so duong nho nhat la:%d\n ",inn);
}
