#include <stdio.h>

/*
 *符号在计算机内部也用数字表示，每个字符在计算机内部用一个整数表示，称为字符编码（Character Encoding），目前最常用的是ASCII码（American Standard Code for Information Interchange，美国信息交换标准码）
 *
 *
 * */

int main (){

	//字符常量或变量可作为整数参与运算
	//k在ASCII码中是107,计算‘k’+1表达式其实是
	//107 + 1
	printf("%d\n",'k'+1);

	return 0;
}
