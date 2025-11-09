#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  cout<<n<<":";
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      while(n%i==0){
        n=n/i;
        cout<<" "<<i;
      }
    }
  }
  if(n>1){
    cout<<" "<<n;
  }
  cout<<"\n";
}

