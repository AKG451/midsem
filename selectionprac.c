#include<stdio.h>

int main(){

int arr[]={23,43,13,17,93};
int size = sizeof(arr)/sizeof(arr[0]);
int a = 0;

printf("Unsorted array:");
while(a<size){
    printf("%d ",arr[a]);
    a++;
}

  for(int i=0;i<size-1;i++){
    int min_n=i;
      for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min_n]){
            min_n=j;
        }
      }
      int temp = arr[min_n];
      arr[min_n] = arr[i];
      arr[i] = temp;
  }
  printf("\n");
  printf("Sorted array (Selection Sort): \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}
