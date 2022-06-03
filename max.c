#include <stdio.h>
#include <stdlib.h>
#import "KnapsackDP.c"

int main(int argc, char **args) {
  int list[7] = {5, 1, 2, 3, 7, 14, 6};
  int value[7] = {10, 3, 5, 4, 8, 17, 9};
  int n= sizeof(list)/sizeof(list[0]);
  int C;//背包容量
  printf("%d\n", KnapsackDP(list,value,n,10));
  return 0;
}
