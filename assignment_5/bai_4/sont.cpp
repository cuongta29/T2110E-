#include<stdio.h>
int main()
{ int n;
printf("nhap vao so nguyen to n:\n");
scanf("%d",&n);
printf("cac so nguyen to truoc %d la: \n",n);
for(int i=2;i<n;i++){
	int count=0,d;
	for(int j=1;j<=i;j++){
		d=i%j;
		if(d==0)count++;
	}if(count!=2)continue;
	printf("%d\n",i);
}
}
