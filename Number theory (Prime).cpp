#include <bits/stdc++.h>
using namespace std;

int p[1010000];
int main(){
  int N=1010000;

  p[0]=1;
  p[1]=1;

  for(int i=2;i<N;i++){
    if(p[i]==0){
      for(int j=2*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }
  int n;
  while(cin>>n){
    if(p[n]==1){
      cout<<n<<" is not prime.\n";
    }
    else{
      string s=to_string(n);
      reverse(s.begin(),s.end());
      int a=stoi(s);
      if(p[a]==0 && a!=n){
        cout<<n<<" is emirp.\n";
      }
      else{
        cout<<n<<" is prime.\n";
      }
    }
  }
}
/*
https://vjudge.net/contest/197330#overview
*/

