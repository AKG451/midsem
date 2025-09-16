//Tax calculation program
//1. For income up to Rs. 2,50,000: No tax
//2. For income Rs. 2,50,001 to Rs. 5,00,000: 5% on the income exceeding Rs. 2,50,000
//3. For income Rs. 5,00,001 to Rs. 10,00,000: 20% on the income exceeding Rs. 5,00,000
//4. For income above Rs. 10,00,000: 30% on the income exceeding Rs. 10,00,000
#include <stdio.h>

int main(){

    double income,tax=0;
     printf("Please enter your annual income: ");
     scanf("%lf",&income);
     if(income<0){
        printf("Invalid input");
     }
     else if(income>0 && income<=250000){
        tax = 0;
     }
     else if(income>250000 && income<=500000){
        tax = (0.05*income);
     }
     else if(income>500000 && income<=1000000){
        tax = (0.20*income);
     }
     else if(1000000<income){
        tax = (0.30*income);
     }
  printf("You have to pay %.2f as taxes",tax);
return 0;
}
