#include <bits/stdc++.h>
using namespace std;

int p[1000001];
int digit_p[1000001];

int main(){
ios::sync_with_stdio(0);cin.tie(0);
p[1]=1;
p[0]=1;
int N=1000001;
for(int i=2;i*i<N;i++){
  if(p[i]==0){
    for(int j=2*i;j<N;j+=i){
      p[j]=1;
    }
  }
}

  for(int i=0;i<N;i++){
  if(p[i]==0){
    string s=to_string(i);
    int b=0;
    for(int j=0;j<s.size();j++){
      b=b+s[j]-'0';
    }
    if(p[b]==0){
      digit_p[i]=1;
    }
   }
  }
  
  for(int i=1;i<N;i++){
    digit_p[i]=digit_p[i]+digit_p[i-1];
  }
  int a;cin>>a;
  for(int i=0;i<a;i++){
    int n,m;cin>>n>>m;
    cout<<digit_p[m]-digit_p[n-1]<<"\n";
  }
}

/*https://vjudge.net/contest/197330#problem/W
*/


