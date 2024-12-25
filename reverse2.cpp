#include<iostream>
using namespace std;
int main(){
     int n=0;
       cout<< "enter an number of integers number"<<"\n";
       cin>>n;
    int arr[n];
    
    
    cout<<"enter an value of arry"<<n<<"\n";
    for(int i=0;i<n;i++){
        
     cin >>arr[i] ;
     
    

    }
   

    for(int i=n-1;i>=0;i--){


     cout<<arr[i]<<" ";

 }

}