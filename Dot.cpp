#include <bits/stdc++.h>
using namespace std;
int mp[1002][1002];  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N;cin>>N;
  for(int i=1;i<=N;i++){
   int x,y;cin>>x>>y;
     mp[x][y]=1;
  }
  int k=0;
  for(int i=0;i<=1000;i++){
    for(int j=0;j<=1000;j++){
      if(mp[i][j]==1){
        k++;
      }
    }
  }
  cout<<k;

  
}
