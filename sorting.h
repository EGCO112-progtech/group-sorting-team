// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
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
  sorted=0;
  for(i=1;i<n;i++){
for(j=0;j<n-i;j++){
  if(a[j]>a[j+1]){
  swap(&a[j],&a[j+1]);
  sorted = 1;}
    display(a,n);
 }printf("\n");
    printf("\n");
    if(sorted==0) break;}
  
}




