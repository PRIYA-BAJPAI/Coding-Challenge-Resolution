// 21. Reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    //input
    printf("input string : ");
    scanf("%s",str);
    int l=strlen(str); //length calculation
    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}