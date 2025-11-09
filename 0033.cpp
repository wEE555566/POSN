#include <bits/stdc++.h>
using namespace std;
int cnt[10001];

int main(){
  int n,m;
  int mx=-1000000000;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>m;
    cnt[m]=cnt[m]+1;
    if(cnt[m]>mx){
      mx=cnt[m];
    }
  }
  for(int i=1;i<=10000;i++){
    if(cnt[i]==mx){
      cout<<i<<" ";
    }
  }
  

  

}
