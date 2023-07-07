#include<bits/stdc++.h>
using namespace std;
int main(){
	long int a,count=0;
	cin>>a;
	long int chain[a+1];
	for(long int i=0;i<a;i++){
		cin>>chain[i];
	}
	for(long int i=0;i<a-1;i++){
		if(chain[i+1]<chain[i]){
			count+=chain[i]-chain[i+1];
			chain[i+1]=chain[i];
		}
	}
	cout<<count;
}