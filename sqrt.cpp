#include <bits/stdc++.h>
using namespace std;

int t;


int main(){
  set<int> s;
    cin>>t;
  for(int i=1;i*i<=t;i++){
    if(t%i==0){
      s.insert(i);
      s.insert(t/i);
    }
  }
  for(auto i:s){
    cout<<i<<" ";
  }
}





