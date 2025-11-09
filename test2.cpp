
#include <bits/stdc++.h>
using namespace std;
char a[2001][4500];
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

void F(int n,int y,char g){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      if(i==1){
        a[i][j+y]=g;
      }
      else if(j==1){
        a[i][j+y]=g;
      }
      else if(i==n){
        a[i][j+y]=g;
      }
    }
  }
}
void O(int n,int y,char g){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      if(i==1){//
        a[i][j+y]=g;
      }
      else if(i==2*n-1){
        a[i][j+y]=g;
      }
      else if(j==1){
        a[i][j+y]=g;
      }
      else if(j==n){
        a[i][j+y]=g;
      }
    }
  }
}
void R(int n,int y,char g){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=n;j++){
      
      if(i==1){
        a[i][j+y]=g;
      }
      else if(j==1){
        a[i][j+y]=g;
      }
      else if(i==n){
        a[i][j+y]=g;
      }
      else if(i-j==n-1){
        a[i][j+y]=g;
      }
      else if(i<n && j==n){
        a[i][j+y]=g;
      }
    }
  }
}
void D(int n,int y,char g){
for(int i=1;i<=2*n-1;i++){
  for(int j=1;j<=n;j++){
      if(i==1){
        a[i][j+y]=g;
      }
      else if(i==2*n-1){
        a[i][j+y]=g;
      }
      else if(j==1){
        a[i][j+y]=g;
      }
      else if(j==n){
        a[i][j+y]=g;
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
  int q;
  cin>>q;
  while(q--){
    memset(a,' ',sizeof a);
    int n,k;
    cin>>n>>k;
    char c[k];
    for(int i=0;i<k;i++){
      cin>>c[i];
    }
    char b[k];
    for(int i=0;i<k;i++){
      cin>>b[i];
    }
    for(int j=0;j<k;j++){
      //if(j%4==0) F(n, j*(n+1),c[j]);
      //if(j%4==1) O(n, j*(n+1),c[j]);
      //if(j%4==2) R(n, j*(n+1),c[j]);
      //if(j%4==3) D(n, j*(n+1),c[j]);
      if(b[j]=='F') F(n, j*(n+1),c[j]);
      if(b[j]=='O') O(n, j*(n+1),c[j]);
      if(b[j]=='R') R(n, j*(n+1),c[j]);
      if(b[j]=='D') D(n, j*(n+1),c[j]);
    }
    for(int i=1;i<=2*n-1;i++){
      for(int j=1;j<=k*(n+1);j++){
        cout<<a[i][j];
      }
      cout<<'\n';
    }
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
/*
...*......*......*......*......*......*......*......*...
..***.....*.....*........*....***....***......*.....*...
.*.*.*....*....*..........*..*.*.*..*.*.*......*....*...
*..*..**..*..****************..*..**..*..*********..*..*
...*....*.*.*..*..........*....*......*........*..*.*.*.
...*.....***....*........*.....*......*.......*....***..
...*......*......*......*......*......*......*......*...
*/
