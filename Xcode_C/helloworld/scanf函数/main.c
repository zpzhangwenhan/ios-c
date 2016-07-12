//
//  main.c
//  scanf函数
//
//  Created by zhangwenhan on 16/7/11.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // printf("please enter  your age \n");
    // int age=0;
    //scanf("%d",&age);  //& 取地址符
    // printf("age=%d\n",age);
    
    //
    //    float f=0.0f;
    //    scanf("%f",&f);
    //    printf("f=%f \n",f);  //float 保留6位小数
    //    return 0;
    
//    
//    char c;
//    scanf("%c",&c);
//    printf("c=%c \n",c);  //float 保留6位小数
//    return 0;
    
    
    int n1;
    float f1;
    scanf("%d%f",&n1,&f1);   //
    printf("n1=%d   f1=%f \n",n1,f1);  //float 保留6位小数
    return 0;
}
