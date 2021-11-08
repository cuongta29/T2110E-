#include<stdio.h>
int main(){
	int n;
	printf("nhap vao n:\n");
	scanf("%d",&n);
	int arr[n],arr2;
	for(int i=0;i<n;i++){
		int m;
		int flag=0;
        do{
		printf("nhap vao so thu %d: \n",i);
		scanf("%d",&arr2);
		for(  m=0;m<i;m++){
			if (arr2==arr[m])break;
		}
		if(arr2==arr[m]){
			printf("so da co trong mang\n ");flag=1;
		}
	}while(flag==1);
	if(flag==0)
		arr[i]=arr2;}
	}

		
	
