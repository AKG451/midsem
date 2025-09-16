#include <stdio.h>

int main(){

  int secretnumber=5;
  int i;

  while(1){
    printf("Please guess the number between 1 to 10(Enter -1 to exit the loop): ");
    scanf("%d",&i);
    if(i==-1){
        break;
    }
    if(i>10 || i<1){
        printf("Invalid Input");
    }
    else if(i>secretnumber){
        printf("The entered number is greater than the secret number\n");
    }
    else if(i<secretnumber){
        printf("The entered number is smaller than the secret number\n ");
    }
    else if(i==secretnumber){
        printf("Congratulations you have guessed the number correctly\n");
    }
  }
return 0;
}


