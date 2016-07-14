//
//  main.c
//  zwh_practice
//
//  Created by zhangwenhan on 16/7/13.
//  Copyright © 2016年 zhangwenhan. All rights reserved.
//


//#include< >和#include“ ”的区别
//< >引用的是编译器的类库路径里面的头文件
//" "引用的是你程序目录的相对路径中的头文件

#include <stdio.h>
#include  <math.h>


int main(int argc, const char * argv[]) {
    printf("九九算数1 \n");
    for (int i=1; i<=9; i++) {
        for (int  j=1; j<=i; j++) {
            printf("%d*%d=%d \t",i,j,i*j);
        }
        printf("\n");
    }
    
    printf("九九算数2 \n");
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d*%d=%d \t",j,i,i*j);
        }
        printf("\n");
        
    }
    
    printf("九九算数3 \n");
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(j<i)
                //打印八个空格，去掉空格就是左上三角形
                printf("        ");
            else
                printf("%d*%d=%2d  ",i,j,i*j);
        }
        printf("\n");
    }
    
    printf("九九算数4 \n");
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(j<i)
                //打印八个空格，去掉空格就是左上三角形
                printf("");
            else
                printf("%d*%d=%2d  ",i,j,i*j);
        }
        printf("\n");
    }
    
    
    printf("倒三角 \n");
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("等差数列的求和问题 100 内求和 \n");
    int result=0;
    for (int i=0; i<=100; i++) {
        result+=i;
    }
    printf("%d \n",result);
    
    
    
    printf("100-999 之间水仙花数\n");  //水仙花数是指一个 n 位数 ( n≥3 )，它的每个位上的数字的 n 次幂之和等于它本身。
    for (int i=100; i<=999; i++) {
        int bai=i/100;
        int shi=i%100/10 ;  //或(i-bai*100)/10;
        int ge=i%10;        //或i-bai*100-shi*10;
        if (i==pow(bai, 3)+pow(shi,3)+pow(ge,3) ) {   //pow 在 math.h 里
            printf("%d \t",i);
        }
    }
    
    
    return 0;
}
