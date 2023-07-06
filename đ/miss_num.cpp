#include<iostream>
using namespace std;

int main(){
    long int a,s=0;
    cin>>a;
    long int array1[a];
    for(int i=0;i<a-1;i++){
        cin>>array1[i];s+=array1[i];
    }
    long int t=(a+1)*a/2;
    cout<<t-s;
}