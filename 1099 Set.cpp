#include<bits/stdc++.h>
using namespace std;



int main() {
  set<int> s;
  int a,b;
  cin>>a>>b;
  int g=__gcd(a,b);
  for(int i=1;i<=sqrt(g);i++){
    if(g%i==0){
      s.insert(i);
      s.insert(g/i);
    }
  }
  for(auto i:s){
    cout<<i<<" "<<a/i<<" "<<b/i<<"\n";
  }
}

//https://programming.in.th/tasks/1165
//https://programming.in.th/tasks/1099

