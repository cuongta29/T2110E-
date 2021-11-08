#include<stdio.h>
#include<conio.h>
int main(){
	int NTN,N,T;
	printf("nhap vao ngay: \n");
	scanf("%d",&N);
	printf("nhap vao thang: \n");
	scanf("%d",&T);
	if(N==29&&T==2&&N<=28)
	printf("day khong phai nam nhuan thang 2 co 29 ngay");
	else if(1<=N&&N<=31&&1<=T&&T<=12){
		if(T==1){
			NTN=0+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		else if(T==2){
			NTN=31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d=1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
			else if(T==3){
			NTN=31+28+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
			else if(T==4){
			NTN=31+28+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
				else if(T==5){
			NTN=31+28+30+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
				else if(T==6)
			{
			NTN=31+28+30+31+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		
			
		
		 else if(T==7){
			NTN=31+28+31+30+31+30+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
			else if(T==8){
			NTN=31+28+31+30+31+30+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		
		
		else if(T==9){
			NTN=31+28+31+30+31+30+31+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		
		else if(T==10){
			NTN=31+28+31+30+31+30+31+31+30+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		
		
		else if(T==11){
			NTN=31+28+31+30+31+30+31+31+30+31+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");}
		
			
		else if(T==12){
			NTN=31+28+31+30+31+30+31+31+30+31+30+N; 
			printf("ngay trong nam la:%d\n",NTN);
			int d;
			d=NTN%7;
			if(d==1)
			printf("thu 2");
				if(d==2)
			printf("thu 3");
				if(d==3)
			printf("thu 4");
				if(d==4)
			printf("thu 5");
				if(d==5)
			printf("thu 6");
				if(d==6)
			printf("thu 7");
				if(d==0)
			printf("chu nhat");
			}
		
			
		
			
	}else
	printf("moi ban nhap lai");
	getch();
	
}
