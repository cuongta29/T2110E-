#include<stdio.h>
int main(){
	int n;
	printf("nhap so n:\n");
	scanf("%d",&n);
	int im[n];
	for(int i=0;i<n;i++){
		printf("nhap vao so nguyen: \n");
		scanf("%d",&im[i]);
		
	}
	int s=0,count=0;
	for(int i=0;i<n;i++){
		if(im[i]%2==0)continue;
		s+=im[i];
		count++;
	}s/=count;
	printf("trung binh cong cua cac so le la:%d ",s);
}
