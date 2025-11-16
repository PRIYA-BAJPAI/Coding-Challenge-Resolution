// 31. Compress the string (like Leetcode 443)
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="akashganga";
    int n=strlen(str); 
    int freq[256]={0};
    int i,count;
    for( i=0;i<n;i++){
        if(freq[str[i]]==0){
            count=1;
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            printf("%c%d",str[i],count);
            freq[str[i]]=1;//marked visited
        }
        
    
    }
    return 0;
    
}