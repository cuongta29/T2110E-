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
	int s=0,smax=0;
	for(int i=0;i<n;i++){
		int d[n];
		if(im[i]<=0){s=0;continue;}
		else if(im[i]>0){
			s+=im[i];
			d[i]=s;
		}
		if(d[i]>smax)
		smax=d[i];
		
		
	}printf("chuoi so duong co tong lon nhat la:%d",smax);}
