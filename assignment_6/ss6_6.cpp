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
	int count=0,c[n],countmax;
	for(int i=0;i<n;i++){
		if(im[i]<=0)
		{count=0;continue;}
		else if(im[i]>0){count++;c[i]=count;}
		countmax=1;
		if(c[i]>countmax)
		countmax=c[i];
	
		
	}printf("so luong cac so duong lon nhat lien tiep la:%d",countmax);
}
