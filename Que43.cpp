#include<iostream>
using namespace std;
// void snake(int arr[][],int r,int c){
//     for(int i=0;i<r;i++){
//        if(i%2==0){
//         for(int j=0;j<c;j++){
//             cout<<j<<" ";
//         }
//        }else{
//         for(int j=c-1;j>=0;j--){
//             cout<<j<<" ";
//         }
//        }
//     }
// }
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
    cout<<"Snake :"<<endl;
    for(int i=0;i<r;i++){
       if(i%2==0){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
       }else{
        for(int j=c-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
       }
    }
    return 0;
}