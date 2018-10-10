#include <stdio.h>

float luongthang13(int a, int b) {
    int luong = 0;
    float thuong = 0;
    if (a < 2) {
        printf("Luong chinh thuc la 10 trieu");
        luong = 10;
    } else if (a >= 2 && a <= 5) {
        printf("Luong chinh thuc la 20 trieu");
        luong = 20;
    } else {
        printf("\nLuong chinh thuc la 30 trieu\n");
        luong = 30;
    }
    if (b < 1) {
        thuong = luong * 0.3;
    } else if (b >= 1 & b <= 2) {
        thuong = luong * 0.5;
    } else if (b >= 2 && b <= 5) {
        thuong = luong;
    }else{
        thuong = luong *2;
    }
    return thuong;

}

int main() {
    int a, b, thuong;
    printf("Vui long nhap so nam kinh nghiem");
    scanf("%d", &a);
    printf("Vui long so nam lam viec cho cong ty");
    scanf("%d", &b);
    printf("\nluong thuong thang 13 la %f\n", luongthang13(a,b));
    return 0;
}