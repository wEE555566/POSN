#include <bits/stdc++.h>
using namespace std;
int p[50000];
vector <int> s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=50000;
  p[0]=1;
  p[1]=1;
  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }
  int T;cin>>T;
  while(T--){
    int n;cin>>n;
    long long int ans=1;
    for(auto x:s){
      int a=n;
      if(x>n){
        break;
      }
      int k=1;
      while(a>0){
        k=k+a/x;
        a=a/x;
      }
      ans=ans*k;
      ans=ans%1000000007;
    }
    cout<<ans<<"\n";
  }
}

/*
10!= 2^8 3^4 5^2 7^1

  10/2     k=k+5
  5/2
  2/2




  

https://vjudge.net/problem/SPOJ-DIVFACT

*/
