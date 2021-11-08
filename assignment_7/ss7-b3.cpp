#include<stdio.h>
int main(){
	int n;
	printf("nhap vao n:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int flag;
		do{
			flag=0;
		printf("nhap vao so nguyen to thu %d:\n",i+1);
		scanf("%d",&arr[i]);
		int count=0;
		for(int j=1;j<=arr[i];j++){
			if((arr[i]%j)==0)count++;
		}
		if(count!=2){
			printf("so %d khong phai la so nguyen to\nmoi nhap lai\n",arr[i]);
			flag=2;
		}
		for(int k=0;k<i;k++){
			if(arr[i]==arr[k]){
				printf(" da ton tai so nguyen to tren\n moi nhap lai\n");
				flag=1;
			}
		}
	}while(flag!=0);
	}
}
