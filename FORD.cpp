
#include <bits/stdc++.h>
using namespace std;
char a[2001][2001];
void N(int n, int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
      if(i==j){
        a[i][j+y]='#';
      }
     else if(j==1){
       a[i][j+y]='#';
     } 
      else if(j==2*n-1){
        a[i][j+y]='#';
      }
    }
  }
}
void I(int n,int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=1;j++){
      if(j==1){
        a[i][j+y]='#';
      }
    }
  }
}
void A(int n,int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
      if(i==1 && j!=1 && j!=2*n-1){
        a[i][j+y]='#';
      }
      else if(i==n){
        a[i][j+y]='#';
      }
      else if(j==1 && i!=1 ){
        a[i][j+y]='#';
      }
      else if(j==2*n-1 && i!=1){
        a[i][j+y]='#';
      }
    }
  }
}

void F(int n,int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      if(i==1){
        a[i][j+y]='#';
      }
      else if(j==1){
        a[i][j+y]='#';
      }
      else if(i==n){
        a[i][j+y]='#';
      }
    }
  }
}
void O(int n,int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      if(i==1){//
        a[i][j+y]='#';
      }
      else if(i==2*n-1){
        a[i][j+y]='#';
      }
      else if(j==1){
        a[i][j+y]='#';
      }
      else if(j==n){
        a[i][j+y]='#';
      }
    }
  }
}
void R(int n,int y){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      if(i==1){
        a[i][j+y]='#';
      }
      else if(j==1){
        a[i][j+y]='#';
      }
      else if(i==n){
        a[i][j+y]='#';
      }
      else if(i-j==n-1){
        a[i][j+y]='#';
      }
      else if(i<n && j==n){
        a[i][j+y]='#';
      }
    }
  }
}
void D(int n,int y){
for(int i=1;i<=2*n-1;i++){
  for(int j=1;j<=n;j++){
      if(i==1){
        a[i][j+y]='#';
      }
      else if(i==2*n-1){
        a[i][j+y]='#';
      }
      else if(j==1){
        a[i][j+y]='#';
      }
      else if(j==n){
        a[i][j+y]='#';
      }
    }
  }
  a[1][n+y]=' ';
  a[2*n-1][n+y]=' ';
}
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  /*
  memset(a,' ',sizeof a);
  int n;
  cin>>n;
  N(n, 0*(2*n-1 + 1));
  N(n, 1*(2*n-1 + 1));
  N(n, 2*(2*n-1 + 1 ));
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=3*(2*n-1  +  1);j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
  */
  memset(a,' ',sizeof a);
  int n;
  cin>>n;
  F(n, 0*(n+1));
  O(n, 1*(n+1));
  R(n, 2*(n+1));
  D(n, 3*(n+1));
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=4*(n+1);j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}

/*
n=4
11 [12][13][14][15][16] [17]
[21] 22  23  24  25  26 27
[31] 32  33  34  35  36 37
41 [42][43][44][45][46] 47
51 52  53  54  55  56 [57]
61 62  63  64  65  66 [67]
[71][72][73][74][75][76]77
*/
//https://crackncode.contest.codeforces.com/group/rn8uJP8lA7/contests
