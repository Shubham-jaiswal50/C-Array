#include<iostream>
using namespace std;
int main(){
    int arr[]={10,3,5,1,2,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout <<len<<"\n";

    char ch[]="welcome";
    int len2=sizeof(ch)/sizeof(ch[0]);
    cout << len2;
}
