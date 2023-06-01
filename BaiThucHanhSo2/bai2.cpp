// Nguyen Huu Hau 20215573
#include <stdio.h>

//hoan vi vong tron 3 bien bang tham chieu
void rotate(int &x, int &y, int &z) {
   int tmp;
   tmp = x;
   x = y;
   y = z;
   z = tmp;
}

int main() {
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    return 0;
}
// Nguyen Huu Hau 20215573