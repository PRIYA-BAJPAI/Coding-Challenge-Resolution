//38. Search in a row-wise and column-wise sorted matrix
#include<iostream>
using namespace std;
bool search(int arr[50][50],int tar,int r,int c){
    int m=0;
    int n=c-1;
    while(m<r && n>=0){
        if(tar==arr[m][n]){
            return true;
        }else if(tar<arr[m][n]){
            n--;
        }else{
            m++;
        }
    }
    return false;
}
int main(){
    int arr[50][50];
    int tar,r,c;
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
    cout<<search(arr,tar,r,c);
    return 0;
    }