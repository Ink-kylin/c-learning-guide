#include <math.h>
#include <stdio.h>

/*
 *
 * 数学函数
 * 使用math.h的库函数时，gcc命令必须添加-lm选项，因为数学函数唯一libm.so库文件中，-lm告诉编译器数学函数要在这个库文件中找。
 **/
int main(void){
        double pi = 3.1416;
        printf("sin(pi/2)=%f\nln1=%f\n", sin(pi/2), log(1.0));
        return 3;
}

void printspace(void){

	printf(" ");

}
