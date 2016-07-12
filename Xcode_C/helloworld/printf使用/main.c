//
//  main.c
//  printf使用
//
//  Created by zhangwenhan on 16/7/11.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float f=3.1415926f;
    int a=110;
    char c='A';
    //char address[100]=&f;
    //printf("f地址 %s \n",address);
    printf("a=%d\n",a);      //％d格式控制字符
    printf("a=%5d\n",a);     //％d格式控制字符  5位整型 前补0
    printf("a=%05d\n",a);    //％d格式控制字符  5位整型 前补空格
    printf("a=%－5d\n",a);   //％d格式控制字符  5位整型 后补空格

    printf("f=%f\n",f);   //％f格式控制字符
    printf("c=%c\n",c);   //％f格式控制字符
    for (int i=0; i<100; i++) {
        printf("%d ",i);
        if (i+1==100) {
            printf("\n");
        }
    }
    
    printf("%% \n");
    
    return 0;
}
