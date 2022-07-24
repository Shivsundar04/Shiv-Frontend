#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"no. of co-ordinate:- ";cin>>n;
    int a=n,b=2;
    cout<<"Enter "<<n<<" co-ordinate of polygon:- \n";
    int X[a],Y[b];
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
        for(int j=0;j<n;j++){
            cin>>Y[j];
        }
    
    double area = 0.0;
  
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  
    }
  
   
    return (area / 2.0);
}