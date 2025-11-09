#include <bits/stdc++.h>
using namespace std;
int p[100100];

int main(){
  int N=100100;
  int n,m;
  cin>>n>>m;  
  for(int i=1;i<=n;i++){
    cin>>p[i];
  }
  while(m--){
    int a,b;
    cin>>a>>b;
    swap(p[a],p[b]);
  }
  for(int i=1;i<=n;i++){
    cout<<p[i]<<" ";
  }
  
}

