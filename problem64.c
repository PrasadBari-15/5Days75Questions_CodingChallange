
#include<stdio.h>
#include<string.h>
 
 void main(){
    char arr[100];
    int n;

    printf("Enter a String:");
    gets(arr);
    n=strlen(arr);

    if(arr[0]=='/' && arr[1]=='/')
    printf("It is an single line comment...");

    else if(arr[0]=='/' && arr[1]=='*'){
        if(arr[n-1]=='/' && arr[n-2]=='*')
        printf("It is an multiline comment...");
    }
    else
    printf("It is not a comment...");

 }