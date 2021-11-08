#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so n: \n");
	scanf("%d",&n);
	printf("cac so chan be hon n la : \n");
	for(int i=2;i<n;i++){
		int d;
		d=i%2;
		if(d==0){
			printf("%d\n",i);
		}
	}
}
