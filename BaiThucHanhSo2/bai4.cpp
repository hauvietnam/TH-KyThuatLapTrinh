// Pham Dang Anh Duc - 20210207
#include <stdio.h>

// ham tinh lap phuong kieu int
int cube(int x) {
    return x*x*x;
}
// ham tinh lap phuong cua so kieu double
double cube( double x){
    return x*x*x;
}
int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);
    
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));
    
    return 0;
}
// Pham Dang Anh Duc - 20210207