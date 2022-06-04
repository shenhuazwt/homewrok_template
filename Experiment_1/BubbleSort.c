#include <stdio.h>
#include <stdlib.h>
//冒泡排序
void bubbleSort(int *list,int n){
    int numberOfPairs = n;
    int swappedElements = 1;
    while(swappedElements){
        numberOfPairs = numberOfPairs-1;
        swappedElements = 0;
        for(int i=1;i<=numberOfPairs;i++){
            if (list[i]>list[i+1]){
                //
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                swappedElements=1; 
            }
        }
    }
}