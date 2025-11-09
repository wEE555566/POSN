#include <bits/stdc++.h>
using namespace std;

bool p[1055];
bool p2[1000000];

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
int N=1055;
  for(int i=2;i<N;i++){
    if(p[i]==0){
      int k=i*i;
      if(k<=1000000){
        p2[k]=1;
      }
      for(int j=i*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }


  int n,m,a=0;
  cin>>n>>m;
  for(int i=n;i<=m;i++){
    if(p2[i]==1){
      cout<<i<<" ";
      a++;
    }
  }
  if(a==0){
    cout<<"-1";
  }

}


