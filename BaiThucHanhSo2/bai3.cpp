// Nguyen Huu Hau 20215573
#include <stdio.h>

//# Viết hàm get_value
int get_value(int x, int a = 2, int b = 1, int c = 0){ // tham so ngam dinh a = 2, b = 1, c = 0
    return a*x*x + b*x+c;
}

int main(){
    int x;
    scanf("%d", &x);
    
    int a = 2; //# gia tri mac dinh cua a
    int b = 1; //# gia tri mac dinh cua b
    int c = 0; //# gia tri mac dinh cua c
    
    //# Nhập 3 số nguyên a, b, c từ bàn phím
    scanf("%d %d %d",&a, &b, &c);
    
    printf("a=2, b=1, c=0: %d\n", get_value(x));
    printf("a=%d, b=1, c=0: %d\n", a, get_value(x, a));
    printf("a=%d, b=%d, c=0: %d\n", a, b, get_value(x, a, b));
    printf("a=%d, b=%d, c=%d: %d\n", a, b, c, get_value(x, a, b, c));
    
    return 0;
}
// Nguyen Huu Hau 20215573