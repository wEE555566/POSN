/* LANG : c++*/
#include<bits/stdc++.h>
using namespace std;

int a[5]={2,4,6,8,2};
int mn=1000000000,mx=-110000000;
int sum=0;
int product=1;
int g=0;

int main(){
  
  for(int i=0;i<5;i++){
    
    if(a[i]<mn){
      mn=a[i];
    }
    
    if(a[i]>mx){
      mx=a[i];
    } 

    sum=sum+a[i];
    product=product*a[i];

    g= __gcd(g , a[i]);
  }
    cout<<mn<<" "<<mx<<"\n";
    cout<<sum<<" "<<product<<"\n";
  cout<<g<<"\n";
}


