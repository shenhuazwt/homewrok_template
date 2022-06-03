#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *list,int first,int last){
    if(first<last){
        int middle = (first+last)/2;
        mergeSort(list, first, middle);
        mergeSort(list, middle+1, last);
        MergeLists(list, first, middle, middle+1, last);
    }
}



void MergeLists(int *list, int start1, int end1, int start2,int end2) {
    
    while ((start1<=end1) && (start2≤end2)){
        if (list[start1] < list[start2]){
             result[indexC]=list[start1];
             start1=start1+1;
        }else {
             result[indexC]=list[start2];
             start2=start2+1;
        }
        indexC=indexC+1;
    }
    if(start1<=end1){
        for(int i= start1;i<=end1;i++){
            result[indexC]=list[i];
            indexC=indexC+1;
        }
    }else {
        for(int i=srart2;i<=end2;i++){
            result[indexC]=list[i]; 
            indexC=indexC+1;
        }
    }
    indexC=1;
    for(int i=finalStart;i<finalEnd;i++){
        list[i]=result[indexC];
        indexC=indexC+1;
    } 

}