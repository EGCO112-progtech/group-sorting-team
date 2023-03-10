// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void yelectionsort(int a[], int n) {
  int i, j, m, k;
  for (j = 0; j < n - 1; j++) {
    m = a[j];
    k = j;
    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        k = i;
       
    }
  }
  
     swap(&a[j], &a[k]);
    display(a, n);
    printf("\n");
    }
}

void insertion(int x[], int n) {

  int j, i;
  for (j = 1; j < n; j++) {
    int insert = x[j];
    for (i = j - 1; i >= 0; i--) {
      if (insert < x[i])
        break;
      else
        x[i + 1] = x[i];
      display(x, n);
    }
    x[i + 1] = insert;
    display(x, n);
    printf("\n");
  }
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {
  int i, j;
  int sorted;
  sorted = 0;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");

    if (sorted == 0)
      break;
  }
}
