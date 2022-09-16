#include <stdio.h>
// ---------- Intersection Sort ------------

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    insertion_sort(a, n);
    for(j = 0; j < n; j++){
        printf("%d\n", a[j] );
    }

    return 0;
}


// ----------   Selection Sort
#include <stdio.h>

// hamgiin baga utgiig ehnees n awhuulaad solij bgaa
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      eremblegdeegv jagsaaltin hamgiin bagiig olood indexiig hadgalna
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // swap ruu ywuulah hayg
    swap(&array[min_idx], &array[step]);
  }
}

// hewleh
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {20, 12, 10, 15, 2};

  selectionSort(data, size);
  
  printArray(data, size);
}

// -------------- Buble Sort ---------
void insertion_sort(int a[], int n){
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    insertion_sort(a, n);
    for(j = 0; j < n; j++)
        printf("%d\n", a[j] );
    
    return 0;
}