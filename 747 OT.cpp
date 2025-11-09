#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,string>;
priority_queue<pii> s;


int main(){
   ios::sync_with_stdio(0);cin.tie(0);
  string x;
  while(cin>>x){
   if(x=="New"){
     string a;cin>>a;
     int b;cin>>b; 
     s.push({b,a});
   }
  if(x=="Call"){
    cout<<s.top().second<<"\n";
    s.pop();
  }
  if(x=="Exit"){
    break;
  }
  }
   
   
   
}
