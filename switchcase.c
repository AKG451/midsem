#include<stdio.h>

int main(){

   int arr[100],odd[100],even[100];
   int size,i;
   int evenc=0,oddc=0;
      printf("Enter the number of elements you want in your array: ");
      scanf("%d",&size);
      for(i=0;i<size;i++){
        printf("Enter the elements of arrays:\n");
        scanf("%d",&arr[i]);
      }
      for(i=0;i<size;i++){
        if((arr[i]%2)==0){
            even[evenc]=arr[i];
            evenc++;
        }else{
            odd[oddc]=arr[i];
            oddc++;
            }
      }
      printf("Original Array: \n");
      for(i=0;i<size;i++){
        printf("%d ",arr[i]);
      }
      printf("\n");
       printf("Even Array: \n");
      for(i=0;i<evenc;i++){
        printf("%d ",even[i]);
      }
      printf("\n");
       printf("Odd Array: \n");
      for(i=0;i<oddc;i++){
        printf("%d ",odd[i]);
      }

return 0;
}
