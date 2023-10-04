//Swap Numbers Using Temporary Variable
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value gor b:");
    scanf("%d",&b);
    printf("\nBefore Swapping...");
    printf("\na=%d",a);
    printf("\nb=%d",b);
     
     c=a;
     a=b;
     b=c;
     printf("\nAfter Swapping..");
      printf("\na=%d",a);
    printf("\nb=%d",b);


}