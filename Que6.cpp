// 6. Find Union and Intersection of two arrays
#include<stdio.h>
int main(){
    int a1[100],a2[100],U[100],I[100];
    int n1,n2,l=0,m=0,found,i,j;
    //input
    printf("Enter number of elements you want to input in set1 :");
    scanf("%d",&n1);
    printf("Enter %d elements :\n",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter number of elements you want to input in set2 :");
    scanf("%d",&n2);
    printf("Enter %d elements :\n",n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    //union
    for(i=0;i<n1;i++){
        U[l++]=a1[i];
    }
    for(j=0;j<n2;j++){
        found=0;
        for(i=0;i<n1;i++){
            if(a2[j]==a1[i]){
                found=1;
                break;
            }
        }
        if(found==0){
        U[l++]=a2[j];
        }
    }
    //intersection
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a1[i]==a2[j]){
                I[m++]=a1[i];  
                break;
            }
        }
    }

    //print
    printf("union of set1 and set2 : ");
    for(i=0;i<l;i++){
        printf("%d ",U[i]);
    }
    printf("\nintersection of set1 and set2 : ");
    if(m==0){
        printf("No common element");
    }else {
    for(i=0;i<m;i++){
        printf("%d ",I[i]);
    }
}
    return 0;
}