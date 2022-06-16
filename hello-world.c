#include <stdio.h>

/*
 *简单的输出
 *
 * */
int main(){
	/* c语言学习指南
	 *printf函数接受一个格式化字符串,它规定了后面的常量以何种格式插入到这个字符串中,在格式化字符串中%号后面加上字母c、d、f分别表示字符型、整型、浮点型的转换说明。转换说明在格式化字符串中用于占位，通常叫做占位符。
	 * */
	printf("hello,world\n");
	printf("character: %c\ninteger: %d\nfloating point: %f\n",
			'}',35,3.1415);
	return 0;

}
