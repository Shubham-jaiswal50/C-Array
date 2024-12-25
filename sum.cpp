#include<iostream>
using namespace std;
int main(){


int sum=0;
  
    int arry[10] = {1,2,3,7,2,3,6,8,1,9};
    int s= sizeof(arry)/sizeof(arry[0]);
    for(int i=0;i<s;i=i+2){
        sum=sum+arry[i];
    }
cout<<sum;
}