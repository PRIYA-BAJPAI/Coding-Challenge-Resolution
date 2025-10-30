// 22. Check for palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    //input
    printf("input string : ");
    scanf("%s",str);
    int l=strlen(str); //length calculation
    int pal=1;
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            pal=0;
            break;
        }
    }
    if(pal==0){
        printf("Not palindrome.");
    }else{
        printf("Palindrome");
    }
    return 0;
}