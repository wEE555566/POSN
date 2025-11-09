/*Lang : C++*/
#include <bits/stdc++.h>
using namespace std;

long long int t;


int main(){
  cin>>t;
  if(t<=1){
    cout<<"No";
  }
  else{
    for(int i=2;1ll*i*i<=t;i++){
      if(t%i==0){
        cout<<"No"; 
        return 0;

      }
    }
    cout<<"Yes";
  }
}





