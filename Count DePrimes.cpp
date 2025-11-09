#include <bits/stdc++.h>
using namespace std;
int p[5000005];
int dp[5000005];
vector <int> s;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  p[1] = 1;
  p[0] = 1;
  int N = 5000000;
  for (int i = 2; i * i <= N; i++) {
    if (p[i] == 0) {
      s.push_back(i);
      for (int j = 2 * i; j <= N; j+=i) {
        p[j]=1;
      }
    }
  }
  dp[2]=1;
  dp[3]=1;
  dp[4]=1;
  dp[5]=1;  
  for(int i=6;i<=5000000;i++){
    int n=i;
    int ans=0;
    for(auto x:s){
      if(x*x>n){
        break;
      }
      if(n%x==0){
        ans=ans+x;
        while(n%x==0){
          n=n/x;
        }
      }
    }
    if(n>1){
      ans=ans+n;
    }
    if(p[ans]==0){
      dp[i]=1;
    }
  }
  for(int i=1;i<=5000000;i++){
    dp[i]=dp[i]+dp[i-1];
  }

  int a,b;
  while(cin>>a){
    if(a==0){
      break;
    }
    cin>>b;
    cout<<dp[b]-dp[a-1]<<"\n";
  }
}
/*
https://vjudge.net/problem/UVA-11408
*/
