#include<stdio.h> 
int main (){
	//input A hinh binh hanh 
	int A ;
	printf (" nhap A =");
	scanf("%d",&A);
	// r = a mod 2 hinh chu nhat 
	int r ;
	r = A % 2;
	// r =0 
	if(r==0){
		printf (" so chan ");
	}else { 
		printf ("so le ");
	}
	
}
