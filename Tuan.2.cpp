#include<bits/stdc++.h>
using namespace std;

int p[1005];
int k[1000005];
vector<int>s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  p[0]=1;
  p[1]=1;
  int N=1000;
  for(int i=2;i<=N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=i*2;j<=N;j+=i){
        p[j]=1;
      }
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
    k[i]=ans;
  }
  int n;cin>>n;
  while(n--){
    int a,b,c;cin>>a>>b>>c;
    int l=0;
    for(int i=a;i<=b;i++){
      if(k[i]==c){
        l++;
      }
    }
    cout<<l<<"\n";
  }
}


/*
https://cses.fi/problemset/task/1640
https://vjudge.net/problem/UVA-10311
3 2 4  5  1 1   5  3
  3 5 9 14 15 16 21 24

2 3 5 7 11 13 17 19

-9
https://cses.fi/problemset/task/1646
https://vjudge.net/contest/197330#problem/M
*/
