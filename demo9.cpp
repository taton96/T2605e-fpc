#include <stdio.h>
#include <math.h>
int main(){
	int so_tien_hien_co = 5000;
	float lai_suat = 8;
	int so_nam = 3;
	float tong;
	tong = so_tien_hien_co * pow((1+lai_suat),so_nam);
	printf("tong so tien sau 3 nam la =%f",tong);
}
