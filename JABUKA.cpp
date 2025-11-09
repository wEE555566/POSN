#include<bits/stdc++.h>
using namespace std;
vector<int> s;
int main() {
ios::sync_with_stdio(0);cin.tie(0);
int a,b;
  cin>>a>>b;
int g=__gcd(a,b);
for(int i=1;i*i<=g;i++){
  if(g%i==0){
    if(g/i!=i){
     s.push_back(g/i);
    }
    s.push_back(i);
  }
}
  sort(s.begin(),s.end());
  for(auto x:s){
    cout<<x<<" "<<a/x<<" "<<b/x<<"\n";
  }
  
}
