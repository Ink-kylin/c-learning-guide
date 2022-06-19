#include <stdio.h>

//习题
void exercise() {
    int x = -1;
    if (x < 0) {
        printf("x is positive.\n");

    }
}

/*
 * 1. int型的1和0分别表示true、false
 * */
int main(void) {

    int flag = 1;
    if (flag) {
        printf("条件为真,flag = %d\n", flag);
    } else {
        printf("条件为假,flag = %d\n", flag);
    }
    exercise();
    return 0;
}


