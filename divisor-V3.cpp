
#include <bits/stdc++.h>
using namespace std;
int p[1005];
int dv[1000002];
vector<int> s;
int main(){
  //ios::sync_with_stdio(0);cin.tie(0);
  p[0]=1;
  p[1]=1;
  int N=1005;
  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
        p[j]=1;      
      }
    }
  }
  int mx=-10000;
  for(int i=1;i<=1000000;i++){
    int n=i;
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
      ans=ans*k;
    }
    if(n>1){
      ans=ans*2;
    }
    dv[i]=ans;
    mx=max(mx,ans);
  }
  cout<<mx;
//  
//  int n; cin>>n;
//  while(n--){
//    int a,b,c; cin>>a>>b>>c;
//    int d=0;
//    for(int i=a;i<=b;i++){
//      if(dv[i]==c){
//        d++;
//      }
//    }
//    cout<<d<<"\n";
//  }
  
}

