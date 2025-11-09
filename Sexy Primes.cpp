#include<bits/stdc++.h>
using namespace std;
bool p[10000020];

int main() {
ios::sync_with_stdio(0);cin.tie(0);
  p[1]=1;
  p[0]=1;
  int N=1000000;
  for(int i=2;i*i<=N;i++){
    if(p[i]==0){
      for(int j=i*i;j<=N;j+=i){
        p[j]=1;
      }
    }
  }
  int a,b;cin>>a>>b;
  int k=0;
  for(int i=a;i+6<=b;i++){
    if(p[i]==0 && p[i+6]==0){
      k++;
    }
  }
 cout<<k;
}

/*
https://www.hackerrank.com/contests/week-9-code-hackathon/challenges/sexy-primes
*/
