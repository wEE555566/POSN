/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;

char a[1002][1002];
void D(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      int d=abs(i-(n/2+1))+abs(j-(n/2+1));
      if(d<=n/2){
        if(n%4==3){
          if(d%2==1) a[i][j]='*';
          else  a[i][j]='^';
        }
        else{
          if(d%2==1) a[i][j]='^';
          else  a[i][j]='*';
        }
      }
    }
  }
  a[n/2+1][n/2+1]='N';
}


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  memset(a,' ',sizeof a);
  int n;
  cin>>n;
  D(n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}

