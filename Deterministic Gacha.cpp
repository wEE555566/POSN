#include<bits/stdc++.h>
using namespace std;
int dp[100005];

int main() {
ios::sync_with_stdio(0);cin.tie(0);
  int a,b;cin>>a>>b;
  string s;
  for(int i=1;i<=a;i++){
    cin>>s;
    if(s=="UR"){
      dp[i]=1;
    }
  }
  for(int i=1;i<=a;i++){
    dp[i]=dp[i]+dp[i-1];
  }
  int mx=-100000;
  for(int i=b;i<=a;i++){
     mx=max(dp[i]-dp[i-b],mx);
  }
  cout<<mx;
}

