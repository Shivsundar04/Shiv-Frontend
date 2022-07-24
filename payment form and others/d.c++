#include <iostream>
using namespace std;

class volunteer{
    void pairs{

    }
}
int main(){
    int n,sum=0;
    cout<<"No. of volunters:- "; cin>>n;
    cout<<"enter amount:- ";
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int p,k;
    cout<<"Number of pairs:- ";cin>>p;
    
    int a[p][k];
    for(int i=0;i<p;i++){
        for(int j=0;j<2;j++){
            cin>>a[p][k];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<2;j++){
    if(a[i][j]==a[i+1][j] || a[i][j]==a[i+1][j+1] || a[i][j+1]==a[i+1][j] || a[i][j+1]==a[i+1][j+1]){
        sum=a[i]+a[j]+a[j+1]+a[i+1];
    }
    

     
    return 0;
}
    }