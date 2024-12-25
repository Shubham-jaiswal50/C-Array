#include<iostream>
using namespace std;
int main(){
    int arr[]={2,81,64,121,6};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);


    for(int i=0 ; i<=s;i++)
    {

        int n =arr[i];
  for(int j=1; j<n/2;j++){
    if(j*j==n){
        cout <<n<<"\t";
    }
  }
        
    }

}