#include <stdlib.h>
#include <stdio.h>
#include <time.h>//使用当前时钟做种子
int a = 97;

int randNum(int range,int seed){
    int c = rand()%100;
    seed = (a*seed + c)%range +1;
    return seed;
}
