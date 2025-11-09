/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;
char a[10*11+1][10*11+1];

void D(int n,char c,int x, int y){
  for(int i=1;i<=n ;i++){
    for(int j=1;j<=n ;j++){
      int d=abs(i-(n/2+1))+abs(j-(n/2+1));
      if(d<=n/2){
        a[i+x][j+y]=c;
      }
    }
  }
}


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  memset(a,'.',sizeof a);
  char k;
  cin>>k;
  int n;
  cin>>n;
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      D(n,k,i*n,j*n);
    }
  }

  for(int i=1;i<=n*m;i++){
    for(int j=1;j<=n*m;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
  
}

