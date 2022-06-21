#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#import "2_1_KnapsackDP.c"
#import "/workspace/homewrok_template/Experiment_1/1_1_randomInteger.c"

int length[8]={10, 20, 40, 100, 200, 400, 800, 2000};//数据个数
int Container[4] = {200,400,800,2000};//容量

int main(int argc, char **args) {
  for(int k=0;k<4;k++){//容量
    for(int j=0;j<8;j++){//数据个数
      int weight[length[j]];
      int value[length[j]];
      printf("数据集：");
      for(int i=0;i<length[j];i++){//生成随机数
        //
        weight[i] = randNum(Container[k]);//C[k]+100表示数据范围
        printf("(%d,",weight[i]);
        value[i] = randNum(Container[k]);
        printf("%d)",value[i]);
      }
      int value1 = 0;
      double time = 0;
      clock_t begin = clock();
      value1 = KnapsackDP(weight,value,length[j],Container[k]);
      clock_t end = clock();
      time = (double)(end - begin) / CLOCKS_PER_SEC;
      printf("\n结果：%d\n耗时:%fs\n", value1,time);
      sleep(10);
    }
  }
  return 0;
}

