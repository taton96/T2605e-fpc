#include<stdio.h>
int main (){
	int A ;
	printf ("nhap A=");
	scanf ("%d",&A);
	int B ;
	printf(" nhap B=");
	scanf ("%d",&B);
	int C ;
	printf (" nhap C=");
	scanf ("%d",&C);
	if(A>B){
		if(A>C){
			printf (" A la so lon nhat ");
		}else
		    printf ( "C la so lon nhat ");	
	}else
		if(B>C){
			printf (" B la so lon nhat ");
		}else
		    printf (" C la so lon nhat ");
		    return
}
