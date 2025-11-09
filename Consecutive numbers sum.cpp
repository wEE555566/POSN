#include <bits/stdc++.h>
using namespace std;
int p[32000];
vector<int> s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=32000;
  p[1]=1;
  p[0]=1;
  for(int i=2;i<N;i++){
    s.push_back(i);
    for(int j=2*i;j<N;j+=i){
      p[j]=1;
    }
  } 
  int n;cin>>n;
  int ans=1;
  for(auto x:s){
    if(x*x>n){
      break;
    }
    int k=1;
    if(n%x==0){
      while(n%x==0){
        n=n/x;
        k++;
      }
    }
    if(x!=2){
      ans=ans*k;
    }
  }
  if(n>2){
    ans=ans*2;
  }
  cout<<ans<<"\n";
}

//cout<<fixed<<setprecision(6)<<a;
/*https://vjudge.net/contest/197330#problem/W
*/
/*
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
*/
