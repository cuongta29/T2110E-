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
	int x,i;
	printf("nhap vao mot so x:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==im[i]){
			printf("co so x trong bang");break;
		}
	}if(x!=im[i])printf("khong ton tai x trong mang");
}
