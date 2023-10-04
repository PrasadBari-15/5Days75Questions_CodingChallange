#include<stdio.h>
int main(){
    int a,b,quo,rem;
    printf("Enter an Integer:");
    scanf("%d%d",&a,&b);
    quo=a/b;
    rem=a%b;
    printf("Quotent=%d",quo);
    printf("\nReminder=%d",rem);
}