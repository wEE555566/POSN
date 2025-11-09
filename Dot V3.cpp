#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
set<pii> s;

int main(){
   ios::sync_with_stdio(0);cin.tie(0);
  int N;cin>>N;
  for(int i=1;i<=N;i++){
    int x,y;cin>>x>>y;                        
    s.insert({x,y});
  }
  cout<<s.size();
}
