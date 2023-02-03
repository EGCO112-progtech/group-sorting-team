#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc , char *argv[]) 
{
  int N,n;
  int i,new_number;
 
  N = argc-1;
 
  int *a = (int*)malloc(sizeof(int)*N);
 
  for(i=0;i<N;i++)
    {
      a[i]= atoi(argv[i+1]);
  //insertionsort(a,N);
 
      }
  display (a,N);
 yelectionsort (a,N);
  //display(prime, n);
  //bubbleSort(prime, n);
  // insertion(a,N);
   
  //display(prime, n);
return 0;
}

/*void main(int argc, char **argv)
{
int i,*a,N;

N=argc-1;
a=(int*)malloc(sizeof(int)*N);
for(i=0;i<N;i++) 
{

a[i]=atoi(argv[i+1]);
printf(“a[%d]=%d”,i, a[i]);

}

} */