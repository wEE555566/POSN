#include <bits/stdc++.h>
using namespace std;
int p[35000];

int main(){
  int n=35000;
  p[0]=1;
  p[1]=1;
  for(int i=2;i<n;i++){
    if(p[i]==0){
      for(int j=2*i;j<n;j+=i){
        p[j]=1;
      }
    }
  }
int x;
while(cin>>x){
  int a=0;
  if(x==0){
    break;
  }
  for(int i=2;i<=x/2;i++){
    if(p[i]==0 && p[x-i]==0){
      a++;
    }
  }
  cout<<a<<"\n";
  

}
}

/*

https://otog.in.th/problem 176
https://programming.in.th/tasks/codecube_116
https://programming.in.th/tasks/codecube_158
https://vjudge.net/contest/197330#overview

*/
