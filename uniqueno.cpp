#include<iostream>
using namespace std;
int main(){
    int arry[10] = {1,2,3,7,2,3,6,8,1,9};
    int s= sizeof(arry)/sizeof(arry[0]);
    for(int i=0;i<s;i++){
        int count=0;
       
         for(int j=0;j<s;j++){
           if( arry[i] == arry[j]){
        count++;
        
           }
           
        }

if(count==1){
            cout<<arry[i]<<"\t";
            
           }
    }
    cout<<endl;
  return 0;  
}
