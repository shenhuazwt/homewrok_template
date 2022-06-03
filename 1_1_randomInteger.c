#include <stdlib.h>
#include <stdio.h>
#include <time.h>//使用当前时钟做种子

int randNum(int range){
    srand( (unsigned)time( NULL ) ); //初始化随机数
    return rand()%range+1;
}
