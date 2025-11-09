/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;
char a[105][105*255];

void U(int n,char x,int y){
  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=2*n+1;j++){
      if(j==n+1){
        a[i][j+y]=x;
      }
      else if(j-i==n){
        a[i][j+y]=x;
      }
      else if(j+i==n+2){
          a[i][j+y]=x;
      }
      else{
        a[i][j+y]='.';
      }
    }
  }
}
void D(int n,char x,int y){
  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=2*n+1;j++){
      if(j==n+1){
        a[i][j+y]=x;
      }
      else if(i-j==n){
        a[i][j+y]=x;
      }
      else if(j+i==3*n+2){
          a[i][j+y]=x;
      }
      else{
        a[i][j+y]='.';
      }
    }
  }
}
void R(int n,char x,int y){
  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=2*n+1;j++){
      if(i==n+1){
        a[i][j+y]=x;
      }
      else if(j-i==n){
        a[i][j+y]=x;
      }
      else if(j+i==3*n+2){
          a[i][j+y]=x;
      }
      else{
        a[i][j+y]='.';
      }
    }
  }
}
void L(int n,char x,int y){
  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=2*n+1;j++){
      if(i==n+1){
        a[i][j+y]=x;
      }
      else if(i-j==n){
        a[i][j+y]=x;
      }
      else if(j+i==n+2){
          a[i][j+y]=x;
      }
      else{
        a[i][j+y]='.';
      }
    }
  }
}
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  memset(a,'.',sizeof a);
  int n;
  cin>>n;
  char x;
  cin>>x;
  string s;
  cin>>s;
  int k;
  k=s.size();
  for(int i=0;i<k;i++){
    if(s[i]=='U'){
      U(n,x,i*(2*n+1));
    }
    else if(s[i]=='D'){
      D(n,x,i*(2*n+1));
    }
    else if(s[i]=='R'){
      R(n,x,i*(2*n+1));
    }
    else if(s[i]=='L'){
      L(n,x,i*(2*n+1));
    }
      
  }


  
  for(int i=1;i<=2*n+1;i++){
    for(int j=1;j<=k*(2*n+1);j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}
/*

11 [12][13][14][15][16] [17]
[21] 22  23  24  25  26 27
[31] 32  33  34  35  36 37
41 [42][43][44][45][46] 47
51 52  53  54  55  56 [57]
61 62  63  64  65  66 [67]
[71][72][73][74][75][76]77
*/
