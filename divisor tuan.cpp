#include<bits/stdc++.h>
using namespace std;
int p[1005];
int dp[1000005];
vector<int> s;
int main(){
ios::sync_with_stdio(0); cin.tie(0);
  p[1]=1;
  p[0]=1;
  int N=1000;
  for(int i=2;i*i<=N;i++){
    if(p[i]==0){
      for(int j=2*j;j<=N;j+=i){
        p[j]=1;
      }
    }
  }
  s.push_back(2);
  for(int i=3;i<=N;i+=2){
    if(p[i]==0){
      s.push_back(i);
    }
  }
  for(int i=1;i<=1000000;i++){
    int ans=1;
    int n=i;
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
      ans=ans*k;
    }
    if(n>1){
      ans=ans*2;
    }
    dp[i]=ans;
  }
  int n;cin>>n;
  while(n--){
    int a,b,c;cin>>a>>b>>c;
    int d=0;
    for(int i=a;i<=b;i++){
      if(dp[i]==c){
        d++;
      }
    }
    cout<<d<<"\n";
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
