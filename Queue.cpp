#include <bits/stdc++.h>
using namespace std;

queue<int> s;


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
int n;
  cin>>n;
  while(n--){
    string a;
    cin>>a;
    if(a=="push"){
      int b;
      cin>>b;
      s.push(b);
    }
    else{
      if(s.empty()){
        cout<<"null\n";
      }
      else{
        cout<<s.front()<<"\n";
        s.pop();
      }
    }
  }
}


