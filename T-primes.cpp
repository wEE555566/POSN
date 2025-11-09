#include <bits/stdc++.h>
using namespace std;

bool p[1100000];

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=1100000;
  p[0]=1;
  p[1]=1;
  for(int i=2;i*i<N;i++){
    if(p[i]==0){
      for(int j=i*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }
  long long int n;
  cin>>n;
  while(n--){
    long long int x;
    cin>>x;
    long long int s=sqrt(x);
    if(s*s==x  && p[s]==0){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
    
  }
}
/*
https://vjudge.net/contest/197330#overview


2^2   1 2 4
3^2   1 3 9
2^4  1 2 4 8 16
25  1 5 25
1 7 49
*/
