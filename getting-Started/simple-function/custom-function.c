#include <stdio.h>
//定义一个没有返回值,不接收参数的函数,它的执行会打印AB
void printAB(void){

	printf("AAA\n");
	printf("BBB\n");
}
//声明一个函数,它没有函数体,只有返回值类型、方法名、形参列表，这三者组成的结构称作函数原型，这种操作叫做函数声明。声明函数且带有函数体才叫做函数定义
void printC(){}


/*
 * 自定义函数
 * 可以调用C标准库提供的函数,也可以自定义函数,就像此处的main一样
 * */
int main(void){
	/*
	 * 操作系统在调用main函数时会传递参数,所以main函数最标准的定义形式是int main(int argc, char *argv[]),如果不需要参数,c标准也允许int main(void)写法,
	 * */

	printAB();
	printC();
	return 0;
}


