#include<stdio.h>
int main(){
	int i,n;
	float s;
	printf("nhap vao so n de tinh tong day\n S=1+1/2+1/3+1/4+1/5+...+1/n \n");
	scanf("%d",&n);
    s=0;
	i=1;
	
	if(n<=0){while(n<=0){
		
			printf("loi moi ban nhap lai gia tri n>=0: \n");
			scanf("%d",&n);}
		
	}	if(n>0){
			while(i<=n){
			s+=(float)1/i;
			i++;
		}
		printf("tong %.3f",s);
	
	}
	else {
			while(i<=n){
			s+=(float)1/i;
			i++;
		}
		printf("tong %.3f",s);
		
	}
	}

