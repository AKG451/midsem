#include<stdio.h>

int main(){

 int array[] = {2,4,5,6,7,8,9,13};
 int size = sizeof(array)/sizeof(array[0]);
 int target = 8;
 int found_index=-1;
 int left = 0;
 int right = size-1;
    while(left<=right){
       int mid = left+(right-left)/2;
        if(array[mid]==target){
            found_index = mid;
            break;
        }
        if(array[mid]<target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    if(found_index==-1){
        printf("The number doesn't exist in the given array\n");
    }else{
      printf("%d was found on index %d",target,found_index);
    }
return 0;
}
