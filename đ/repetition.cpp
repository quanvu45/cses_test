#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin>>t;
    int len=t.length(),rep=1,max=0,i=0;
    while(i<len){
        if(t[i]==t[i+1]){
            rep++;i++;
        }
        else{
            if(max<rep){
                max=rep;
            }
            rep=1;i++;
        }
    }
    cout<<max;
}