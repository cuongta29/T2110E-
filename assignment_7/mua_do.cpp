#include<stdio.h>
#include<conio.h>
int main(){
	int c, flag;
	do{
		flag=0;
	printf("MENU\n 1. chon mon an\n 2.Goi do uong\n 3.Thanh toan\n 4.Thoat chuong trinh\n");
	scanf("%d",&c);
	if(c!=1&&c!=2&&c!=3&&c!=4){
		printf("xin moi chon lai\n moi chon mot trong cac muc tren\n");
		flag=1;
	}
	else if(c==1){
		int c1;
		printf("1.Com ga\n 2.Pho\n 3.Bun.\n 4.Quay lai\n");
		scanf("%d",&c1);
		if(c1==1||c1==2||c1==3){
			printf("cam on quy khach, quy khach se duoc dua ve menu chinh!!\n");
			flag=1;
		}
		else flag=1;
	}
	else if(c==2){
		int c2;
		printf("1.Nuoc Sting\n 2.CAFE\n 3.COCA COLA\n 4.Quay lai\n");
		scanf("%d",&c2);
		if(c2==1||c2==2||c2==3){
			printf("cam on quy khach, quy khach se duoc dua ve menu chinh!!\n");
			flag=1;
		}
		else flag=1;
	}
	else if(c==3){
		printf("so tien ban can tra la: \n cam on ban da su dung dich vu cua chung toi\n");
		flag=1;
	}else if(c==4)
	{printf("xin chao va hen gap lai quy khach");break;}
}while(flag=1);
getch();
	
	
	
}
