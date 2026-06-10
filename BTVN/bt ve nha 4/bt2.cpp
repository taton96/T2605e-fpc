#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int tong = 0, dem = 0;
    for(int i = 0; i < n; i += 2) {
        if(arr[i] % 2 != 0) {
            tong += arr[i];
            dem++;
        }
    }
    if(dem > 0) {
        float tbc = (float)tong / dem;
        printf("Trung binh cong cac so le o vi tri chan = %.2f", tbc);
    } else {
        printf("Khong co so le o vi tri chan!");
    }
}
