// 46. Search a 2D matrix (Leetcode 74)
#include<iostream>
using namespace std;
bool search(int arr[][50],int tar,int r,int c){
    int strow=0,endrow=r-1;
    int mid;
    while(strow<=endrow){
        int midrow=strow+(endrow-strow)/2;
        if(arr[midrow][0]<=tar && arr[midrow][c-1]>=tar){
            int st=0,end=c-1;
            while(st<=end){
                mid=st+(end-st)/2;
                if(arr[midrow][mid]==tar){
                    return true;
                }else if(arr[midrow][mid]>tar){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }
            return false;
        }else if(arr[midrow][c-1]>=tar){
            endrow=midrow-1;
        }else{
            strow=midrow+1;
        }
    }
    return false;
}
int main(){
    int arr[50][50];
    int r,c,tar;
    cout<<"Enter no. of rows :";
    cin>>r;
    cout<<"Enter no. of columns :";
    cin>>c;
    cout<<"Enter matrix :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter target : ";
    cin>>tar;
    if(search(arr,tar,r,c)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}