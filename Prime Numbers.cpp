#include <bits/stdc++.h>
using namespace std;

vector<string>s;

int main(){
   int n;
  cin>>n;
  int b=0;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    int k=0;
    for(int j=2;j*j<=a;j++){
      if(a%j==0){
        k++;
        break;
      }
    }
    if(k==0){
      b++;
    }
  }
  cout<<b<<"\n";
  
}
/*
https://vjudge.net/contest/197330#overview
*/
