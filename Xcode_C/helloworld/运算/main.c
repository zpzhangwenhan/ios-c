//
//  main.c
//  运算
//
//  Created by zhangwenhan on 16/7/11.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=1;
    int b=2;
    int  sum=a+b;
    printf("%d \n", ++sum);
    
    char name[5]="zhang";
    printf("%s\n",name);
    
    char  c='a';  //char 类型是ascll码来存储的
    c=c+1;        //'a' 先转成97 再跟1相加
    printf("%d_%c   \n",c,c);
    
    printf("---------------强制类型转换---------------------\n");
    int aa=0;
    aa=(int)'A';
    printf("%c_%d \n",aa,aa);
    
    float f1=3.1415f;
    int n1=6;
    printf("%d \n",(int)(f1+n1));
    
    
    int i1=0,i2=0,i3=0,i4=0;
    i1=i2=i3=i4=998;
    
    printf("---------------sizeof-----单目运算符----------------\n");//用于获取操作数占用内存的大小字节数
    printf("当前编译环境下int是:%lu 个字节表示的\n",sizeof(int));  //%lu: unsigned 无符号数（正数）
    printf("当前编译环境下char是:%lu 个字节表示的\n",sizeof(char));
    printf("当前编译环境下float是:%lu 个字节表示的\n",sizeof(float));
    printf("当前编译环境下double是:%lu 个字节表示的\n",sizeof(double));
    printf("当前编译环境下short是:%lu 个字节表示的\n",sizeof(short));
    printf("当前编译环境下long是:%lu 个字节表示的\n",sizeof(long));
    printf("当前编译环境下long long是:%lu 个字节表示的\n",sizeof(long long));
    int test=123;
    printf("%lu \n",sizeof(test));
    printf("%lu \n",sizeof(110));  //字面量
    printf("%lu \n",sizeof(3.1415926f));  //float字面量
    printf("%lu \n",sizeof(3.1415926));  //double字面量
    
    char abc='c';
    printf("%lu \n",sizeof('c'));  //字符型常量是按数字进行存储会被当做int型进行计算，占用4个字节 【相当于：sizeof(99)】
    printf("%lu \n",sizeof(abc));  //占用一个字节
   printf("---------------逗号运算符----------------\n");
    int d1=0;
    d1=(1+2,2+3,11+5);
    printf("%d  \n",d1);  //输出16  值等于最后一个表达式的值
    
    
    int bb=1>2;
    printf("%d  \n",bb);
    //逗你玩
    return 0;
}
