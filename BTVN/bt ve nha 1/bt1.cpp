#include<stdio.h>
int main()
{
	int M ;
	printf ("nhap M=");
	scanf ("%d",&M);
	int N ;
	printf ("nhap N=");
	scanf ("%d",&N);
	int LS ;
	printf ("nhap LS=");
	scanf ("%d",&LS);
	int y ;
	y=0 ;
	while (y<N){
		int L ;
		L=M*LS/100;
		M=M+L ;
		y=y+1;
	}
	printf ("%d",M);
}
