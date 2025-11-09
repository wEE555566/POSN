
#include <bits/stdc++.h>
using namespace std;
char a[2001][2001];
void N(int n){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
      if(i==j){
        a[i][j]='#';
      }
     else if(j==1){
       a[i][j]='#';
     } 
      else if(j==2*n-1){
        a[i][j]='#';
      }
      else{
        a[i][j]=' ';
      }

    }
  }
}
void I(int n){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=1;j++){
      if(j==1){
        a[i][j]='#';
      }
      else{
        a[i][j]=' ';
      }
    }
  }
}
void A(int n){
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
      if(i==1 && j!=1 && j!=2*n-1){
        a[i][j]='#';
      }
      else if(i==n){
        a[i][j]='#';
      }
      else if(j==1 && i!=1 ){
        a[i][j]='#';
      }
      else if(j==2*n-1 && i!=1){
        a[i][j]='#';
      }
      else{
        a[i][j]=' ';
      }
    }
  }
}

void F(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
      if(i==1){
        cout<<"#";
      }
      else if(j==1){
        cout<<"#";
      }
      else if(i==n){
        cout<<"#";
      }
      else{
        cout<<" ";
      }
    }
  }
}
int main(){
  int n;
  cin>>n;
  F(n);
  for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
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
