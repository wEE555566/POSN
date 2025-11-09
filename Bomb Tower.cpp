#include <bits/stdc++.h>
using namespace std;

bool p[510000];

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N=510000;
  int n; cin>>n;
  int a=0;
  int b; cin>>b;
  for(int i=2;i<=n;i++){
    if(p[i]==0){
      a++;
      for(int j=2*i;j<=n;j+=i){
        p[j]=1;
;      }
    }
  }
  if(a>=b){
    cout<<a-b;
  }
  else{
    cout<<"0";
  }
 
}

