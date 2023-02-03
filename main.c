#define N 6
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc ,char *argv[]) {
  int i,*a,N;
int j=0,new_number;
N=argc-1;
a=(int*)malloc(sizeof(int)*N);
int *prime=(int*)malloc(sizeof(int)*N);
for(i=0;i<N;i++) {
a[i]=atoi(argv[i+1]);
  if(strcmp(argv[2],"bubble")==0){display(a,N); bubbleSort(a,N); display(a,N);}
  else if(strcmp(argv[2],"insertion")==0){display(a,N); insertion(a,N); display(a,N);}
  else if(strcmp(argv[2],"selectionsort")==0){display(a,N); selectionSort(a,N); display(a,N);}
  else printf("Bruh");
  return 0;
}


