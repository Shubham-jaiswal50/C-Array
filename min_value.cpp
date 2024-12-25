#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,0,5,4};
  int first=a[0];
  for(int i=1;i<5;i++){
    if(first>a[i]){
        first=a[i];
    }
  }
    cout<<"min value"<<first;
    
    }
    



//dat