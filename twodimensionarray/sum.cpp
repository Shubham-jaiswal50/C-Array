#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[3][3]={2,6,9,5,8,4,3,7,1};
   for(int r=0; r<3;r++){
    for(int c=0; c<3;c++){
       

      sum=arr[r][c]+sum;
        }
    }

cout <<sum<<"\t";
}
