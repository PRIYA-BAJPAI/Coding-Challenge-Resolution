// 25. Check if two strings are anagrams
#include<stdio.h>
#include<string.h>
void sort(char str[],int n){
    char temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
bool anagram(char str1[],char str2[],int l,int m){
    
    if(l!=m){
        return false;
    }
    sort(str1,l);
    sort(str2,m);
    for(int i=0;i<l;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char str1[50],str2[50];
    printf("Enter 1st string : ");
    scanf("%s",str1);
    printf("Enter 2nd string : ");
    scanf("%s",str2);
    int l=strlen(str1);
    int m=strlen(str2);
    if(anagram(str1,str2,l,m)==true){
        printf("%s and %s is an Anagram",str1,str2);
    }else{
        printf("%s and %s is Not an Anagram",str1,str2);
    } 
    return 0;
}