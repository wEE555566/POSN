#include <bits/stdc++.h>
using namespace std ;


char a[200][200];

void U(int n ,char x,int y){
  for(int i=1;i<=n;i++){
    a[i][(n+1)/2+y]=x;
    if(i<=(n+1)/2){
      a[i][(n+1)/2+1-i+y]=x;
      a[i][(n+1)/2-1+i+y]=x;
    }
  }
}

void D(int n,char x,int y){
  for(int i=1;i<=n;i++){
    a[i][(n+1)/2+y]=x;
    if(i>=(n+1)/2){
      a[i][i-n+(n+1)/2+y]=x;
      a[i][n+(n+1)/2-i+y]=x;
    }
  }
}

void R(int n,char x,int y){
  for(int i=1;i<=n;i++){
    a[(n+1)/2][i+y]=x;
    if (i<=(n+1)/2){
      a[i][(n+1)/2-1+i+y]=x;
    }
    if(i>=(n+1)/2){
      a[i][n+(n+1)/2-i+y]=x;
    }
  }
}

void L(int n,char x,int y){
  for(int i=1;i<=n;i++){
    a[(n+1)/2][i+y]=x;
    if(i<=(n+1)/2){
      a[i][(n+1)/2+1-i+y]=x;
    }
    if(i>=(n+1)/2){
      a[i][i-n+(n+1)/2+y]=x;
    }
  }
}

int main(){
 memset(a,'.',sizeof a);
  int n;
  cin>>n;
  char x;
  cin>>x;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='U'){
      U(2*n+1,x,i*(2*n+1));
    }
    else if(s[i]=='D'){
      D(2*n+1,x,i*(2*n+1));
    }
    else if(s[i]=='R'){
      R(2*n+1,x,i*(2*n+1));
    }
    else if(s[i]=='L'){
      L(2*n+1,x,i*(2*n+1));
    }
  }

  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=(2*n+1)*s.size();j++){//<===============
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}
