// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void yelectionsort(int a[], int n) {
  int i, j, m, k;
  for (j=0; j < n-1; j++) {
    m = a[j];
    k = j;
    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        k = i;
        swap(&a[j], &a[k]);
        display(a,n);
      }
    }
    printf("\n");
    //swap(&a[j], &a[k]);
    display(a, n);
  }
  }




void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




