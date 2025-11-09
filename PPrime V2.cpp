#include <bits/stdc++.h>
using namespace std;
long long int a;

int main(){
  cin>>a;
  if(a<=1){
    cout<<"No";
    return 0;
  }
  int k=0;
  for(long long int i=2;i*i<=a;i++){
    if(a%i==0){
      k++;
      break;
    }
  }
  if(k==0){
    cout<<"Yes";
  }
  if(k>=1){
    cout<<"No";
  }
  
}

