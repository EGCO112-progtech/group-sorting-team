#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include <string.h>
int main(int argc ,char *argv[]) {
  int i,*a,N;
int j=0,new_number;
N=argc-2;
a=(int*)malloc(sizeof(int)*N);
for(i=0;i<N;i++) {
a[i]=atoi(argv[i+2]);}
  if(strcmp(argv[1],"bubble")==0){
    display(a,N);
    bubbleSort(a,N);
   
    }
  else if(strcmp(argv[1],"insertion")==0){
    display(a,N);
    insertion(a,N);
    
    }
  else if(strcmp(argv[1],"yelectionsort")==0){
    display(a,N);
    yelectionsort(a,N);
    
    }
  return 0;
}
