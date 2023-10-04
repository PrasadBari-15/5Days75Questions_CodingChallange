#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    
    char arr[32];
    int flag=0,n,i;

    printf("Enter a string:");
    gets(arr);
    strlen(arr);

    if(isalpha(arr[0])){
        for(i=1;i<=n;i++){
            if(isalnum(arr[i])  || arr[i]=='_'){
            flag=1;
            }
             else {
                flag=0;
                break;
             }
        }  
    }
        if(flag==1)
            printf("%s is valid identifier",arr);
            
        else 
        {
            printf("%s is invalid identifier",arr);
        }
            
}
