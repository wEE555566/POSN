#include <bits/stdc++.h>
using namespace std;

bool p[86100000];
vector<int>s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=86100000;

  p[0]=1;
  p[1]=1;
  for(int i=2;i*i<N;i++){//  i->i*i
    if(p[i]==0){
      for(int j=i*i;j<N;j+=i){// j=2*i->i*i
        p[j]=1;
      }
    }
  }
  s.push_back(2);
  for(int i=3;i<N;i+=2){
    if(p[i]==0){
      s.push_back(i);
    }
  }
  int n;
  cin>>n;
  while(n--){
    int a;
    cin>>a;
    cout<<s[a-1]<<"\n";
  }
}
/*
https://vjudge.net/contest/197330#overview
*/

