#include <bits/stdc++.h>
using namespace std;
int p[1500];
vector<int> s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=1500;
  p[1]=1;
  p[0]=1;

  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }
  int a;cin>>a;
  for(int i=1;i<=a;i++){
    int b;cin>>b;
    int ans=1;
    for(auto x:s){
      if(x*x>b){
        break;
      }
      int k=1;
      if(b%x==0){
        while(b%x==0){
          b=b/x;
          k++;
        }
      }
      if(x!=2) ans=ans*k;
    }
    if(b>2){
      ans=ans*2;
    }
    cout<<ans-1<<"\n";	
  }
}

//cout<<fixed<<setprecision(6)<<a;
/*https://vjudge.net/contest/197330#problem/W
*/
/*
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
*/
