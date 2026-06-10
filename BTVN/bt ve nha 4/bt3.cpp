#include <stdio.h>

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap x = ");
    scanf("%d", &x);

    int tim_thay = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            tim_thay = 1;
            break;
        }
    }

    if(tim_thay)
        printf("%d co trong mang", x);
    else
        printf("%d khong co trong mang", x);
}
