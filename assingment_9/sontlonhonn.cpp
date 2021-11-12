#include<stdio.h>
int soNtLonHon_n(int n){
	int i;
	for(i=n+1;;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)count++;
		}
		if(count==2)break;
	}
	return i;
}
int main(){
	int n;
	printf("nhap vao so n:\n");
	scanf("%d",&n);
	printf("so nguyen to tiep theo cua n la: %d",soNtLonHon_n(n));
}
