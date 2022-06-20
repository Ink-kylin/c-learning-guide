//预处理指令,编译器在预处理阶段
#include <stdio.h>
#include <stdlib.h>
#define N 20

int array[N];

int source[] = {1, 2, 3};

int target[3] = {0};

void gen_random(int upper_bound)
{
    int i;
    for (i = 0; i < N; i++){
        array[i] = rand() % upper_bound;

    }
}

void print_random()
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", array[i]);
    printf("\n");
}


//统计随机数
void statisticalRandomNumbers(){


}

void copyArray(){
    printf("复制数组\n");
    int j = 0;
    for (j = 0; j < 3; j++) {
        target[j] = source[j];
        printf("target[%d]=%d\n", j, target[j]);

    }
}


/*
 * 数组的基本概念
 * 1.数组是一种复合数据类型，由一系列相同类型的元素组成
 * 2.数组的元素可以是基本数据类型，也可以是复合数据类型，元素的存储空间是相邻的，通过索引访问元素
 * 3.数组类型做右值使用时，自动转换成指向数组首元素的指针
 * */
int main() {
    gen_random(10);
    print_random();

    return 0;
}


