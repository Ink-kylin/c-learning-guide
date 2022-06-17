#include <stdio.h>

int main(){

/*
 *1、假设变量x和n是两个正整数，我们知道x/n这个表达式的结果要取Floor，例如x是17，n是4，则结果是4。如果希望结果取Ceiling应该怎么写表达式呢？例如x是17，n是4，则结果是5；x是16，n是4，则结果是4。
 * */
	int x = 17;
	int n = 4;
	printf("x/n = %d\n",x/n);
	return 0;
}

