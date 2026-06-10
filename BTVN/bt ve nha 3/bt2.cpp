#include<stdio.h>
int main(){
	int n;
	printf("nhap so n = ");
	scanf("%d",&n);
	int tong=0;
	int so_du;
	while(n!=0){
		so_du=n%10;
		tong=tong+so_du;
		n= n/10;
	}
	printf("tong cac chu so n la : %d",tong);
}
