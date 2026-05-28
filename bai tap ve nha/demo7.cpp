#include<stdio.h>
#include<math.h>
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
	float p,s ;
	if (A+B>C&& A+C>B&& B+C>A){
		printf("la tam giac\n");
		p= (A+B+C)/2.0 ;
		s= sqrt(p*(p-A)*(p-B)*(p-C));
		printf("chu_vi=%d\n",A+B+C);
		printf("dien_tich=%.2f\n",s);
	}else
		printf(" khong phai la tam giac ");
}
	
