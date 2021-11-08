#include<stdio.h>
int main(){
	int n;
	printf("nhap vao mang n: \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("\n nhap vao so thu %d \n",i);
		scanf("%d",&arr[i]);
		printf("sap xep\n");
		int j;
	    for(j=0;j<i;j++){
	    	for(int m=0;m<i-j;m++){
	    		if(arr[m]>arr[m+1]){
	    			int temp=arr[m];
	    			arr[m]=arr[m+1];
	    			arr[m+1]=temp;
				}
			}
		}
		for(j=0;j<=i;j++)
			printf("%d\t",arr[j]);
    }
}
