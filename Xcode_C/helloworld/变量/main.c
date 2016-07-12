//
//  main.c
//  变量
//
//  Created by zhangwenhan on 16/7/11.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char name =   scanf("please enter your name");
    printf("your enter char is :%c \n",name);
    
    printf("Hello, World!\n");
    
    char  c='z';
    
    char str[200]="zhangwenhan";
    
    printf("%c \n",c);
    printf("%s \n",str);
    
    float f=3.1415926f;
    printf("%f\n",f);
   
    return 0;
}
