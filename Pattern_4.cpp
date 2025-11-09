#include <bits/stdc++.h>
using namespace std;
char p[3500][3500];
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
     if(n-i+1<=j){
       p[i][j]='*';
     }

      else{
        p[i][j]='-';
      }
      cout<<p[i][j];
    }
    cout<<'\n';
  }
}
