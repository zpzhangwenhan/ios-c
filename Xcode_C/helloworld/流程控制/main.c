//
//  main.c
//  流程控制
//
//  Created by zhangwenhan on 16/7/13.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>  //引用库  arc4random_uniform在这个库里

int main(int argc, const char * argv[]) {
    //100个   0-99 随机数
    for (int i=0; i<100; i++) {
        int r=arc4random_uniform(100);   //0~(x-1) 随机
        printf("%d  \n",r);
    }
    printf("-------------------\n");
    //获取<50的10个随机数
    int  count=0;
    while (1) {
        int temp=arc4random_uniform(1000);
        if (temp<50) {
            count++;
            printf("%d \t",temp);
            if (count>=10) {
                break;
            }
        }
    }
    printf("\n------------------\n");
    //获取【6-17） 之间的随机数
    
    int rr=6+arc4random_uniform(11);
    printf("%d \n",rr);
    
    
    printf("\n------------------\n");
    
    
    int flag=97;
    switch (flag) {
        case 1:
            printf("1\n");
            break;
        case 100:
            printf("100\n");
            break;
        case 'a':
            printf("%c_%d \n",'a','a');
            break;
        default:
            printf("fuck！\n");
            break;
    }
    
    
    return 0;
}
