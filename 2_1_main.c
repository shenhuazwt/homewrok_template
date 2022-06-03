#include <stdio.h>
#include <stdlib.h>
#import "2_1_KnapsackDP.c"
#import "1_1_randomInteger.c"
int length[8]={10, 20, 40, 100, 200, 400, 800, 2000};//数据个数
int Container[4] = {200,400,800,2000};//容量

int main(int argc, char **args) {
  for(int k=0;k<4;k++){//容量
    for(int j=0;j<8;j++){//数据个数
      int weight[length[j]];
      int value[length[j]];
      for(int i=0;i<length[j];i++){//生成随机数
        //
        weight[i] = randNum(Container[k]);//C[k]+100表示数据范围
        value[i] = randNum(Container[k]);
      }
      printf("%d\n", KnapsackDP(weight,value,length[j],Container[k]));
      sleep(2);
    }
  }
  return 0;
}
