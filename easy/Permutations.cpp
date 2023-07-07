#include<bits/stdc++.h>
using namespace std;
void deqy(int index);
int a;
int* nuclear,boo;
int main(){
	
	cin>>a;
	nuclear=new int[a+1];
	boo=new int[a+1];
	for(int i=0;i<a;i++){
		boo[i]=0;
	}
	deqy(0);
	
}
void deqy(int index){
	int t=1;
	if(index==0){
		for(int i=0;i<a;i++){
			nuclear[index]=i;boo[i]=1;
		}
    }else if(index==a-1){
    	for(int i=0;i<a;i++){
    		cout<<nuclear[i]<<" ";
    		nuclear[i]=0;
		}
		t=0;
	}else{
		for(int i=0;i<a;i++){
    		if(abs(i-nuclear[index-1])>=2 && boo[i]==0){
    			nuclear[index]=i;boo[i]=1;
			}
		}
	}
	if(t==1){
		deqy(index+1);
	}
}