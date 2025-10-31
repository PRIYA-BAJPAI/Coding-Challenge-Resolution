//23. Remove duplicates from a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    //input
    printf("input string : ");
    scanf("%s",str);
    int l=strlen(str); //length calculation
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                for(int k=j;k<l;k++){
                    str[k]=str[k+1];
                }
                l--;
            }
        }
        
    }
    printf("%s",str);
    return 0;
}