//
//  main.c
//  helloworld
//
//  Created by zhangwenhan on 16/7/10.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//


/*
 command + r 编译
 */

#include <stdio.h>
int main(int argc, const char * argv[]) {
    printf("The para count : %d\n",argc);
    int n=100;
    
    printf("Hello, World!\n");
    printf("n=%d\n",++n);
    
    printf("当前编译环境下int是:%lu 个字节表示的\n",sizeof(int));
    printf("当前编译环境下char是:%lu 个字节表示的\n",sizeof(char));
    printf("当前编译环境下float是:%lu 个字节表示的\n",sizeof(float));
    printf("当前编译环境下double是:%lu 个字节表示的\n",sizeof(double));
    printf("当前编译环境下short是:%lu 个字节表示的\n",sizeof(short));
    printf("当前编译环境下long是:%lu 个字节表示的\n",sizeof(long));
    printf("当前编译环境下long long是:%lu 个字节表示的\n",sizeof(long long));
    
    printf("--------------------------------------------------\n");
    
    
    if(12) {   //永真式（非0）
        printf("永真式\n");
    }else   {
        printf("永真式fuck！\n");
    }
    
    if(0) {   //永假式
        printf("永假式\n");
    }else   {
        printf("永假式fuck！\n");
    }

    printf("--------------------------------------------------\n");
    
    
    
    
    return 0;
}


//fuck
int Sum(int  n)
{
    int result=0;
    
    for (int i=1; i<=n;i++) {
        result+=i;
    }
    
    return result;
}
