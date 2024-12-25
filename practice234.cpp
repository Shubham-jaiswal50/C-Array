#include<iostream>
using namespace std;
int main(){


    int arry[7]={1,2,3,6,8,3,8};
      int arr[] = {3, 6, 7, 21, 12,11};  // Array of numbers
    int s = sizeof(arr) / sizeof(arr[0]);
   int count=0;
   for(int i=0;i<s;i++){
    if(arry[i]>1){
        for(int j=2;j<arry[i];j++){
            if(arry[i]%j==0){
                count++;

            
        }

    }
    if(count==0){
        cout<<arry[i]<<"\t";
    }

   }
    
}
cout<<endl;
}

