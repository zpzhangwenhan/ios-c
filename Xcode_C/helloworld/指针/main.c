//
//  main.c
//  指针
//
//  Created by zhangwenhan on 16/7/13.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int i=99;
    int *i_p=&i;
    double d=3.1415926;
    double *d_p=&d;
    
    printf("i=%d   i_p=%X  d=%f   d_p=%x \n",(unsigned)i,i_p,d,d_p);
    printf("i=%d  i_p=%X  \n",*i_p,&*i_p);
    for (int i=1; i<=9; i++) {
        for (int  j=1; j<=i; j++) {
            printf("%d * %d = %d \t",i,j,i*j);
        }
        printf("\n");
    }
    
    printf("-----------------------------------------\n");
    int digite[]={1,2,3,4,5,6,7,8,9,10};
    int *digite_p=&digite;
    for (int i=0; i<10; i++) {
        printf("%d \t",digite[i]);
    }
    printf("\n");
    
    return 0;
}
