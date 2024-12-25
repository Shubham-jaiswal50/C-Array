#include<iostream>
using namespace std;
int main(){
int cyb[5];
cout<<"enter 5 value\n";
for(int i=0;i<=4;i++){
    cin>>cyb[i];

}
cout<<"\n data stored in arry\n";

for(int i=0;i<=4;i++){


    if(cyb[i]%2==0){
        cout<<cyb[i]<<"\t"; 
    }

}
}