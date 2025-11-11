// 44. Boundary traversal of matrix
#include<iostream>
using namespace std;
int main(){
    int arr[50][50];
    int r,c;
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
    cout<<"Matrix is"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Boundary elements are :"<<endl;
    //top row
    for(int i=0;i<c;i++){
        cout<<arr[0][i]<<" ";
    }
    //right col
    for(int i=1;i<r;i++){
        cout<<arr[i][c-1]<<" ";
    }
    //bottom row
    for(int i=c-2;i>=0;i--){
        cout<<arr[r-1][i]<<" ";
    }
    //left col
    for(int i=r-2;i>0;i--){
        cout<<arr[i][0]<<" ";
    }
}