#include<stdio.h>
int main (){
	int A ;
	scanf("%d",&A) ;
	printf( " nhap A=");
	int B ;
	printf( " nhap B=");
	scanf("%d",&B) ;
	printf("A*X +B = 0");
	if(A==0){
		if(B==0){
			printf(" x vo so nghiem ");
		}else
		printf ("  vo nghiem ");
	}else{
		float x =-(float)B/A ;
		printf("x=%f", x);
	}
}
