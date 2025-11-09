#include <bits/stdc++.h>
using namespace std;

priority_queue<int> s;


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
int n;
  cin>>n;
  while(n--){
    string a;
    cin>>a;
    if(a=="P"){
      int b;
      cin>>b;
      s.push(b);
    }
    else{
      if(s.empty()){
        cout<<"-1\n";
      }
      else{
        cout<<s.top()<<"\n";
        s.pop();
      }
    }
  }
}


