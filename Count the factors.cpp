#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  
  while(cin>>n){
    if(n==0){
      return 0;
    }
    cout<<n<<" : ";
    int x=0;
    for(int i=2 ; i*i<=n ; i++){
      if(n%i==0){
        x=x+1;
        while(n%i==0){
          n=n/i;
        }
      }
    }	
    if(n>1){
      x=x+1;
    }
    cout<<x<<"\n";
  }
}
