#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
for(int i=1;i<=n;i++){
  int a;
  cin>>a;
  cout<<"Case "<<i<<":";
  for(int j=2 ; j*j<=a ; j++){
    if(a%j==0){
      cout<<" "<<j;
      while(a%j==0){
        a=a/j;
      }
    }
  }
  if(a>1){
    cout<<" "<<a;
  }
  cout<<"\n";
}

}

