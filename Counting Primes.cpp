#include <bits/stdc++.h>
using namespace std;
int p[10000001];
int dp[10000001];
int main(){
 ios::sync_with_stdio(0); cin.tie(0);
  p[1]=1;
  p[0]=1;
  int N=10000000;
  for(int i=2;i*i<=N;i++){
    if(p[i]==0){
      for(int j=2*i;j<=N;j+=i){
        p[j]=1;
      }
    }
  }
  dp[2]=1;
  for(int i=3;i<=N;i+=2){
    if(p[i]==0){
      dp[i]=1;
    }
  }
  for(int i=1;i<=N;i++){
    dp[i]=dp[i-1]+dp[i];
  }
  int n;cin>>n;
  while(n--){
    int a,b;cin>>a>>b;
    cout<<dp[b]-dp[a-1]<<"\n";
  }
}
/*

https://www.codechef.com/problems/CNTPRIME

https://programming.in.th/tasks/112 0
https://vjudge.net/contest/197330#problem/I
https://vjudge.net/problem/UVA-11408



https://www.hackerrank.com/contests/week-9-code-hackathon/challenges/sexy-primes
*/
