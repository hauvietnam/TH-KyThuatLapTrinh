// Nguyen Huu Hau 20215573

#include <stdio.h>
#include <math.h>

// ham tinh canh huyen
float get_hypotenuse(float x, float y) {
    float kq,x_1,y_1;
    x_1 = pow(x,2);  // binh phuong canh x
    y_1 = pow(y,2);  // binh phuong canh y
    kq = sqrt(x_1+y_1);  // tinh canh huyen
    return kq;
}

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);
    return 0;
}
// Nguyen Huu Hau 20215573
